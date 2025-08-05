#include<stdio.h>
#include<stdlib.h>
int main()
{
    // reverse integer array values using malloc
    int * ptr;
    int j=9;
    ptr = (int *)malloc(10*sizeof(int));
    int *result = (int *)malloc(10*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not allocated");
        return 1;
    }
    for(int i=0; i<10; i++)
    {
        *(ptr+i) = i;
        //printf("ptr: %d",*(ptr+i));
    }
    for(int i=0; i<10; i++)
    {
        *(result+i) = *(ptr+j);
        //printf("ptr: %d",*(result+i));
        j--;
    }
    for(int i=0; i<10; i++)
        printf("ptr: %d",*(result+i));

}
