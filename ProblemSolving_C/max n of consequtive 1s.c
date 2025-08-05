/***

Given an array consisting of zeros and ones, you are allowed to flip at most 1 element from 0 to 1. Print the size of the sub array which consists of maximum number of consecutive 1's .

Input Format:

The first input denotes the array size.

The remaining input denotes the array elements consisting of 0's and 1's.

Output Format:

Print the count of maximum consecutive 1's.

Sample Input:

10

1 0 1 1 1 0 1 1 1 0

Sample Output:

7


***/

#include<stdio.h>

int get_max_consecutive1(int arr[], int size);

int max_element(int x, int y);

int main()
{
  int arr[100];
  int i, N;
  scanf("%d", &N);
  for(i = 0; i < N; i++)
  	scanf("%d", &arr[i]);

  get_max_consecutive1(arr, N);
  return 0;
}

int max_element(int x, int y)
{
    if(x >= y)
    {
        return x;
    }
    return y;
}

int get_max_consecutive1(int arr[], int N)
{
  int i, count = 0, flip_count = 0, max_count = 0;

  // Scan each element in an array
  for(i = 0; i < N; i++)
  {
    // 1) Count is the number of consecutive 1's ending at arr[i-1]
    //    Example: A[] = {0,1,1,0,1,1,1,1,1} when i = 5, count = 1
    // 2) Flip_Count is the number of consecutive 1's till last seen 0
    //    Example: A[] = {0,1,1,0,1,1,1,1,1} when i = 5, flip_count = 3
    // 3) Max_Count return the maximum number of consecutive 1's

    if(arr[i] == 1)
    {
        count++;
    }
    if(arr[i] == 0)
    {
        if(arr[i+1] == 0)
        {
            flip_count = 1;
        }
        else
        {
            flip_count = count + 1;
            count = 0;
        }
     }
     max_count = max_element(count + flip_count, max_count);
  }
  printf("%d", max_count);
}
