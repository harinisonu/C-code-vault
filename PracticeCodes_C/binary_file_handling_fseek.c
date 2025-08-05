#include<stdio.h>
#include<stdlib.h>
//Binary file handling - fseek
struct employee
{
    int id;
    char name[15];
    float price;
};
int main()
{
    FILE *fp;
    fp = fopen("employee_fseek.bin","wb");
    struct employee emp1 = {1, "hari", 15};
    struct employee emp2 = {2, "hari", 17};
    struct employee emp3 = {3, "john", 17};
    fwrite(&emp1, sizeof(emp1),1,fp);
    fwrite(&emp2, sizeof(emp2),1,fp);
    fwrite(&emp3, sizeof(emp3),1,fp);
    fclose(fp);
    fp = fopen("employee_fseek.bin","rb");
    fseek(fp, 2*sizeof(emp1), SEEK_SET);
    fread(&emp1, sizeof(emp1),1,fp);
    printf("employee id: %d, employee name: %s, employee price: %f\n",emp1.id,emp1.name,emp1.price);
    fclose(fp);
    fp = fopen("employee_fseek.bin","wb");
    int val[7] = {1,2,3,4,5,6,7}, skip=2;
    fwrite(&val, sizeof(int),7,fp);
    fclose(fp);
    fp = fopen("employee_fseek.bin","rb");
    int value;
    while(fread(&value, sizeof(int),1,fp)==1)
    {
        printf("value: %d\n",value);
        fseek(fp, skip*sizeof(int), SEEK_CUR);
    }
    fclose(fp);
    value = 0;
    fp = fopen("employee_fseek.bin","rb");
    fseek(fp, 0, SEEK_END);
    printf("End: %d\n",value);
}
