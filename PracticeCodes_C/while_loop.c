#include<stdio.h>
int main()
{
    int i = 1, j = 1;
     out:
        printf("exit");
    while(++i <= 10){
        while(++j <= 20){
            if(j == 15){
                goto out;
            }
            printf("%d %d\n",i,j);
        }
    }

}
