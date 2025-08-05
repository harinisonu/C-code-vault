#include<stdio.h>
int main()
{
    int arr[2][5] = {{2,4,5,1,2},{8,7,3,4,1}};
    int*val = arr[0];
    int size = sizeof(arr)/sizeof(arr[0][0]);
    printf("Given array:\n");
    // print the 2d array using pointers
    for(int l=0; l<size; l++)
        printf("%d ",*(val+l));
    int pos, temp = 0;
    printf("\nEnter position number to delete value in array: ");
    scanf("%d",&pos);
    printf("\nValue of Array in Position %d: %d",pos,*(val+pos-1));
    pos = pos - 1;
    if(pos == size)
    {
        *(val+size) = "\0";
        size = size - 1;
    }
    else{

        for(int i=pos; i<size; i++)
        {
            *(val+i) = *(val+i+1);
        }
        *(val+size-1) = "\0";
        size = size - 1;
    }

    printf("Modified array:\n");
    for(int l=0; l<size; l++)
        printf("%d ",*(val+l));
}
