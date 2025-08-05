#include<stdio.h>
//2d string
int string_2d_array()
{
   char str[4][12] = {"Hello","Python","pointer","c"};
   for (int i=0; i<4; i++)
   {
       scanf("%s",&str[i]);
       printf("str[4][12]:\n%s\n",str[i]);
   }
    char *s[4] = {"Hello","Python","pointer","c"};
    for (int i=0; i<4; i++)
        //scanf("%c",&s[i]); // error will not display but cannot recieve date -> Already pointer has memory so it cannot get another memory from scanf.
        printf("*s[4]\n%s\n",str[i]);
}

string_pointers()
{
    char *str[4] = {"Hello","Python","pointer","c"};
    for (int i=0; i<4; i++)
    {
        int j=0;
        while(*(str[i]+j) != '\0')
        {
            printf("%c",*(str[i]+j));
            j++;
        }
    }
}

string_function(char *str)
{
    printf("%s\n",str);
}
string_ptr_fun(char * arr[],int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%s\n",arr[i]);
    }
}

int main()
{
    //2d string
    string_2d_array();
    //string using pointers
    string_pointers();
    //string to function
    string_function("Hello");
    //2d String Pointers to Function
    char *a[] = {"Hello","c","c++"};
    string_ptr_fun(a,3);
}
