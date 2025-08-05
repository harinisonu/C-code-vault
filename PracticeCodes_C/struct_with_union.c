#include <stdio.h>
struct store_struct
{
   double price;
   char *title;
   char *author;
   int number_pages;
   int color;
  int size;
  char *design;
};
struct store
{
    double price;
    union
    {
        struct{
        char *title;
        char *author;
        int number_pages;
        } book;

        struct {
        int color;
        int size;
        char *design;
        } shirt;
    }item;
};
  int main()
{
    struct store s;
    s.item.book.title = "C programming";
    s.item.book.author = "John";
    s.item.book.number_pages = 189;
    printf("Size is %ld", sizeof(s));
    struct store_struct s1;
    s1.title = "C programming";
    s1.author = "John";
    s1.number_pages = 189;
    printf("\nSize is %ld", sizeof(s1));
    return 0;
}
