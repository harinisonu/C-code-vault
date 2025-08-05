#include<stdio.h>
int main()
{
    char num[100][100];
    for(int row=0;row<100;row++)
    {
        printf("{");
        for(int col=0;col<100;col++)
        {
            printf("'#',");
        }
        printf("},");
        printf("\n");
    }
}
