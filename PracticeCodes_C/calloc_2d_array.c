#include<stdio.h>
#include<stdlib.h>
#define ROW 2
#define COL 5
void main()
{
    int **ptr = (int**)calloc(5, sizeof(int));
    for(int i=0; i<ROW; i++)
    {
        *(ptr+i) = (int*)calloc(COL, sizeof(int));
    }
    for(int i=0; i<ROW; i++)
        for(int j=0; j<COL; j++)
            scanf("%d",&ptr[i][j]);

    for(int i=0; i<ROW; i++)
    {
        for(int j=0; j<COL; j++)
        {
            printf("%d",ptr[i][j]);
        }
        printf("\n");
    }


}
