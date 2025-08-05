#include<stdio.h>
#define VISITED 1
#define NOT_VISITED 0
int max=0;
void blob_count_sort(int tot_rows,int tot_cols,int city[tot_cols][tot_rows]);
int blob_count_sort_utility(int tot_rows,int tot_cols,int curr_row,int curr_col,int city[tot_cols][tot_rows],int visited[tot_cols][tot_rows],int flag);
int main()
{
    int tot_rows,tot_cols;
    tot_rows=5;
    tot_cols=5;
    int city[5][5]=
    {
        {1,1,1,0,0},
        {0,1,1,0,0},
        {0,0,0,0,1},
        {1,0,0,1,1},
        {1,1,0,0,1}
    };
    blob_count_sort(tot_rows,tot_cols,city);
    printf("%d",max);
    return 0;
}
void blob_count_sort(int tot_rows,int tot_cols,int city[tot_rows][tot_cols])
{
    int visited[tot_rows][tot_cols];
    int row,col,flag;
    for(row=0;row<tot_rows;row++)
        for(col=0;col<tot_cols;col++)
            visited[row][col]=NOT_VISITED;

    for(row=0;row<tot_rows;row++)
    {
        for(col=0;col<tot_cols;col++)
        {
            if(visited[row][col]==NOT_VISITED && city[row][col]==1)
            {
                flag=0;
                visited[row][col]=VISITED;
                int num = blob_count_sort_utility(tot_rows,tot_cols,row,col,city,visited,flag);
                if(max<num)
                    max=num;
            }
        }
    }
    /*for(row=0,printf("\n");row<tot_rows;row++,printf("\n"))
        for(col=0 ; col<tot_cols;col++)
            printf("%2d ",visited[row][col]);//=NOT_VISITED;
            */
}
int blob_count_sort_utility(int tot_rows,int tot_cols,int curr_row,int curr_col,int city[tot_rows][tot_cols],int visited[tot_rows][tot_cols],int flag)
{
    static int max_count=0;
    if(flag==0)
    {
        max_count=1;
        flag=1;
    }
    visited[curr_row][curr_col]=VISITED;
    //top
    if(curr_row-1>=0 && city[curr_row-1][curr_col]==1 && visited[curr_row-1][curr_col]==NOT_VISITED)
    {
        blob_count_sort_utility(tot_rows,tot_cols,curr_row-1,curr_col,city,visited,flag);
        max_count++;
    }
    //top right
    if(curr_row-1>=0 && curr_col+1<tot_cols && city[curr_row-1][curr_col+1]==1 && visited[curr_row-1][curr_col+1]==NOT_VISITED)
    {
        blob_count_sort_utility(tot_rows,tot_cols,curr_row-1,curr_col+1,city,visited,flag);
        max_count++;
    }
    //right
    if(curr_col+1<tot_cols && city[curr_row][curr_col+1]==1 && visited[curr_row][curr_col+1]==NOT_VISITED)
    {
        blob_count_sort_utility(tot_rows,tot_cols,curr_row,curr_col+1,city,visited,flag);
        max_count++;
    }
    //right bottom
    if(curr_row+1<tot_rows && curr_col+1<tot_cols && city[curr_row+1][curr_col+1]==1 && visited[curr_row+1][curr_col+1]==NOT_VISITED)
    {
        blob_count_sort_utility(tot_rows,tot_cols,curr_row+1,curr_col+1,city,visited,flag);
        max_count++;
    }
    //bottom
    if(curr_row+1<tot_rows && city[curr_row+1][curr_col]==1 && visited[curr_row+1][curr_col]==NOT_VISITED)
    {
        blob_count_sort_utility(tot_rows,tot_cols,curr_row+1,curr_col,city,visited,flag);
        max_count++;
    }
    //left bottom
    if(curr_row+1<tot_rows && curr_col-1>=0 && city[curr_row+1][curr_col-1]==1 && visited[curr_row+1][curr_col-1]==NOT_VISITED)
    {
        blob_count_sort_utility(tot_rows,tot_cols,curr_row+1,curr_col-1,city,visited,flag);
        max_count++;
    }
    //left
    if(curr_col-1>=0 && city[curr_row][curr_col-1]==1 && visited[curr_row][curr_col-1]==NOT_VISITED)
    {
        blob_count_sort_utility(tot_rows,tot_cols,curr_row,curr_col-1,city,visited,flag);
        max_count++;
    }
    //left top
    if(curr_row-1>=0 && curr_col-1>=0 && city[curr_row-1][curr_col-1]==1 && visited[curr_row-1][curr_col-1]==NOT_VISITED)
    {
        blob_count_sort_utility(tot_rows,tot_cols,curr_row-1,curr_col-1,city,visited,flag);
        max_count++;
    }
    return max_count;
}
