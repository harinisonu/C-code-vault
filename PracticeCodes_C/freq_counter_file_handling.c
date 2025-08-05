#include<stdio.h>
#define MAX_CHAR 256

void create_file()
{
    char str[] = {"AABACACBDBCD"};
    FILE *fp = fopen("freq_counter.txt", "w");
    if (fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    fprintf(fp,"%s\n", str);
    fclose(fp);
}

void count_char()
{
    char s;
    int count[MAX_CHAR] = {};
    FILE *fp = fopen("freq_counter.txt", "r");
    //int count[sizeof(fp)];
    if (fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    do
    {
        s = fgetc(fp);
        //printf("%c",s);
        count[s]++;
        //printf("%d",count[s]);
    }
    while(s != EOF);
    fclose(fp);
    FILE *fptr = fopen("freq_counter_update_count.txt", "w");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    for(int i=0; i<MAX_CHAR; i++)
    {
        if(count[i] != 0)
        {
            printf("%c. %d\n", i, count[i]);
            fprintf(fptr,"%c. %d\n", i, count[i]);
        }
    }
    fclose(fp);
}

int main()
{
    //create_file()
    count_char();
}
