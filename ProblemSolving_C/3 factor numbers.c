#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int x=10,y=500,flag=0;
    //printf("%d %d\n",x,y);
    for(int ind=x;ind<=y;ind++)
    {
        flag=0;
        //printf("%d\n",ind);
        int sqroot = sqrt(ind);
        //printf("%d ",sqroot);
        if((sqroot*sqroot)==ind)
        {
            //printf("%d %d\n",sqroot,ind);
            for(int root=2;root<sqroot;root++)
            {
                if(ind%root == 0)
                    flag=1;
                //printf("%d %d\n",root,ind);
            }
            if(flag == 0)
                printf("%d ",ind);
        }
    }

}
