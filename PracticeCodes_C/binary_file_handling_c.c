#include<stdio.h>
#include<stdlib.h>
//Binary file handling using struct and dynamic memory.
struct product
{
    int prod_id;
    float price;
    int quantity;
    //char prod_name[20];
};
int main()
{
    FILE *fp = fopen("product.bin","wb");
    if(fp == NULL)
        printf("error opening file");
    //struct product prod = {1, 12.5, 2, "pencil"};
    struct product *prod = (struct product*)malloc(2*sizeof(struct product));
    if(prod == NULL)
        printf("Memory not created");
    //struct product prod[0] = {1, 12.5, 2, "pencil"}; -> error: conflicting types for prod
    prod[0].prod_id = 1;
    prod[0].price =12.5;
    prod[0].quantity = 1;
    // prod[0].prod_name = "pencil"; -> error: assignment to expression with array type.
    prod[1].prod_id = 2;
    prod[1].price =129.2;
    prod[1].quantity = 3;
    fwrite(prod, sizeof(struct product), 2, fp);
    fclose(fp);
    fp = fopen("product.bin","rb");
    if(fp == NULL)
        printf("error opening file to read");
    //printf("%d",fread(&prod, sizeof(struct product), 1, fp));
    int i=0;

    for (i=0;i<2;i++)
    {
       fread(&prod[i], sizeof(struct product), 1, fp) ;
        printf("Product ID %d, Price: %f, Quantity: %d\n",prod[i].prod_id,prod[i].price,prod[i].quantity);

    }

    // printf("Product ID %d, Price: %f, Quantity: %d\n",prod[i].prod_id,prod[i].price,prod[i].quantity);

    free(prod);
    fclose(fp);
}
