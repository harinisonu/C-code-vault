#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[1001],str[1001];
    scanf("%[^\n]",s);
    int n,max_of_count=0,len,alpha=0;
    scanf("%d",&n);
    int count_a[27]={0};
    int count_A[27]={0};
    len=strlen(s);
    int k=0;
    for(int ind=0;s[ind];ind++)
    {
        if(s[ind]>=97 && s[ind]<=123)
        {
            alpha = s[ind]-97;
            count_a[alpha]++;
        }
        else
        {
            alpha = s[ind]-65;
            count_A[alpha]++;
        }
        if(count_a[alpha]==2 && k<n)
        {
            str[k++]=s[ind];
        }
        if(count_A[alpha]==2 && k<n)
        {
            str[k++]=s[ind];
        }
        alpha=0;
    }
    str[k]='\0';
    for(int ind=0;s[ind];ind++)
    {
        for(int k=0;str[k];k++)
        {
        if(str[k]==s[ind])
            printf("%c",s[ind]);
        }
    }


}
