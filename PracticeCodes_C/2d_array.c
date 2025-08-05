#include<stdio.h>
int main()
{
    int mark[2][3]={{1,2,3},{4,5,6}};
    int even [6];
    int odd [6];
    int count = 0;
    for(int i = 0; i < 2; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(mark[i][j] % 2 == 0)
            {
                //printf("Even values: %d\n",mark[i][j]);
                even[count] = mark[i][j];
            }
            else{
                    odd[count] = mark[i][j];
                //printf("Odd Values: %d\n",mark[i][j]);
            }
        count = count + 1;
        }
        printf("\n");
    }

}
