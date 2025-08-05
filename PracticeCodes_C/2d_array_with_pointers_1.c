#include <stdio.h>

#define ROWS 2
#define COLS 3

// Replace value in 2D Array.
void insert(int (*arr)[COLS])
{
    int pos, val, count = 0;
    printf("Enter position, value to be replaced:");
    scanf("%d %d",&pos,&val);
    pos = pos-1;
    for(int i = 0; i < ROWS; i++)
    {
        for(int k = 0; k < COLS; k++)
        {
            printf("pos = %d, i*k: %d",pos,i*k);
            if(pos == (count))
                arr[i][k]= val;
            count++;
        }
        printf("\n");
    }
    for(int i = 0; i < ROWS; i++)
    {
        for(int k = 0; k < COLS; k++)
        {
            printf("%d ", arr[i][k]);
        }
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS] = {{2, 3, 4}, {3, 4, 5}};
    //int *arr= {{2, 3, 4}, {3, 4, 5}};
    insert(arr);
}
