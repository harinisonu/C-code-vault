#include<stdio.h>
#include<stdlib.h>
//realloc
void inc_mem()
{
    int *ptr = (int*)malloc(5*sizeof(int));
    for(int i=0; i<5; i++)
        scanf("%d",&ptr[i]);

    for(int i=0; i<5; i++)
        printf("%d",ptr[i]);
    // increasing heap memory size to 10 from 5;
    ptr = (int*)realloc(ptr,10*sizeof(int));

    for(int i=5; i<10; i++)
        scanf("%d",&ptr[i]);

    for(int i=0; i<10; i++)
        printf("%d",ptr[i]);

    free(ptr);
}
void dec_mem()
{
    int*ptr = (int*)malloc(10*sizeof(int));
    for(int i=0; i<10; i++)
        scanf("%d",&ptr[i]);

    for(int i=0; i<10; i++)
        printf("%d",ptr[i]);

    // increasing heap memory size to 10 from 5;
    ptr = (int*)realloc(ptr,5*sizeof(int));

    for(int i=0; i<5; i++)
        printf("%d",ptr[i]);

    free(ptr);

}
int main()
{
    //inc_mem();
    dec_mem();
}
