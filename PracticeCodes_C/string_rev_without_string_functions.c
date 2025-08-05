#include<stdio.h>
#include<string.h>
int main()
{
    char val[]="Helloi";
    int j =0, n = strlen(val);
    char value[n];
    for(int i=n-1; i>=0; i--)
    {
        value[j] = *(val+i);
        j++;
    }

    printf("%s",value);
}
