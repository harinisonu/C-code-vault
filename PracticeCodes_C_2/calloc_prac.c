// Dynamic memory allocation of array using calloc.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = 0;
    arr = (int*)calloc(5,sizeof(int));
    if(arr == NULL){
        printf("Memory not allocated");
        return 1;
    }
    for(int ind=0; ind<5; ind++)
    {
        printf("Val: %d",arr[ind]);
        //Val: 0Val: 0Val: 0Val: 0Val: 0
    }
    printf("Enter 5 Elements");
    for(int ind=0; ind<5; ind++)
    {
        scanf("%d",&arr[ind]);
    }
    for(int ind=0; ind<5; ind++)
    {
        printf("Val: %d",arr[ind]);
    }
    free(arr);
    arr = NULL;
    return 0;
}