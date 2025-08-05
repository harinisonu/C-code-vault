#include<stdio.h>
int main()
{
    int tot_row,tot_col;
    int matrix_2D_array[4][5]=
    {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
    };
    int t=2;
    tot_row= sizeof(matrix_2D_array)/sizeof(matrix_2D_array[0]);
    tot_col= sizeof(matrix_2D_array[0])/sizeof(matrix_2D_array[0][0]);
    while(t--)
    {
        int st_row=0,st_col=0,end_row=0,end_col=0,value=0,arr[5];
        for(int ind=0;ind<5;ind++)
        {
            scanf("%d",&arr[ind]);
        }
        st_row=arr[0]-1,st_col=arr[1]-1,end_row=arr[2],end_col=arr[3],value=arr[4];
        for(int row=st_row;row<end_row;row++)
        {
            //printf(" %d\nrow : %d %d\n col : %d %d\n",row,st_row,end_row,st_col,end_col);
            for(int col=st_col;col<end_col;col++)
            {
                //printf("%d ",value);
                matrix_2D_array[row][col]=value;
                //printf("%d ",value);
            }
        }
    }
    for(int row=0;row<tot_row;row++)
    {
        for(int col=0;col<tot_col;col++)
        {
            printf("%4d",matrix_2D_array[row][col]);
        }
        printf("\n");
    }

}
