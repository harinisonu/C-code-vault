#include<stdio.h>
#include<string.h>
void matrix_func(int tot_row,int tot_col,int matrix_2D_array[tot_row][tot_col],char str[6]);
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
    char str1[]="1 1 2 4 50";//st_row=1-1=0 ; st_col=1-1=0 ; end_row=2 ; end_col=4;
    char str2[]="2 2 4 3 25";
    tot_row= sizeof(matrix_2D_array)/sizeof(matrix_2D_array[0]);
    tot_col= sizeof(matrix_2D_array[0])/sizeof(matrix_2D_array[0][0]);
    //char s[]=" ";
    //scanf("%[^\n]s",&str);
    //printf("%c",(str[1]));
    matrix_func(tot_row,tot_col,matrix_2D_array,str1);
    matrix_func(tot_row,tot_col,matrix_2D_array,str2);
    for(int row=0;row<tot_row;row++)
    {
        for(int col=0;col<tot_col;col++)
        {
            printf("%4d",matrix_2D_array[row][col]);
        }
        printf("\n");
    }

}
void matrix_func(int tot_row,int tot_col,int matrix_2D_array[tot_row][tot_col],char str[6])
{
    int st_row=0,st_col=0,end_row=0,end_col=0,value=0,arr[5];
    char *token;
    int ind=0;
    token=strtok(str," ");
    while(token != NULL)
    {
        //printf("%s\n",token);
        arr[ind]=atoi(token);
        ind++;
        token = strtok(NULL," ");
    }
   /* for(ind=0;ind<c;ind++)
    {
        printf("%d",arr[ind]);
    }*/
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
    /*for(int row=0;row<r;row++)
    {
        for(int col=0;col<c;col++)
        {
            printf("%4d",matrix_2D_array[row][col]);
        }
        printf("\n");
    }*/
}
