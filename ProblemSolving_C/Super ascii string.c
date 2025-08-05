#include <iostream>
using namespace std;
int main()
{
  string s;
  int i,numbers[100]={0},isAscii,n;
  cin>>n;
  while(n--)
  {
  	cin>>s;
  	i=0;
  	isAscii=1;
   		while(s[i]!='\0')
        {
        	if((s[i]>='a')&&(s[i]<='z'))
            {
            	numbers[s[i]-'a']++;
            }
  			s[i]='\0';
			i++;
        }
		for(i=0;i<26;i++)
		{
			if((numbers[i]>0) && (numbers[i]!=(i+1)))
            {
				isAscii=0;
            }
		numbers[i]=0;
		}
		if(isAscii)
        {
			cout<<"YES ";
        }
		else
        {
			cout<<"NO ";
        }
  }
  return 0;
}
