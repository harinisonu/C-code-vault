#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char str[401];
		scanf("%s",str);
		//int len=0;
		//int k=0;
		int asci[27],count[27],flag=0;
		for(int ind=0;str[ind]!=0;ind++)
		{
			asci[ind] = str[ind]-96;
			//printf("d %d ",asci[ind]);
			count[asci[ind]] += 1;
		}
		for(int ind=0;str[ind];ind++)
		{
		    printf("d %d ",count[asci[ind]]);
			if(asci[ind] != count[asci[ind]])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("NO ");
		else
			printf("YES ");
	}
}
