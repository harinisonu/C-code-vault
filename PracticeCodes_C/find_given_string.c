#include<stdio.h>
#include<string.h>
void find_str(char *string_list[], char *str, int size)
{
    for(int i=0; i<size; i++)
    {
        int j = 0;

        while(*(string_list[i]+j) != '\0')
        {
            //printf("%s",str);
            printf("*(string_list[i]+j): %s",*(string_list[i]+j));

            /*if(str == *(string_list[i]+j))
            {

             printf("%s is found in list",str);
                    break;}
            else
              {

               printf("%s not found in list",str);
                break;
              }*/

        }
    }

}

int main()
{
    char str[10];
    char *string_list[] = {"Hello","Python","pointer","c"};
    printf("Enter any string:");
  //  scanf("%s",&str);
    find_str(string_list, "Hello", 10);
}
