#include <stdio.h>
void inc() {
  int i = 1;
  printf("i: %d\n", i);
  i++;
}
void inc_static() {
  static int i = 1;
  printf("i: %d\n", i);
  i++;
}
int main() {
  // storage specifiers
  // register
  register int a;
  // printf("%p",&a); // cannot get address of variable as it gets stored in CPU
  // Registers / It is volatile.

  // auto
  inc();
  inc();
  inc();

  // static
  //  value of variable gets retained btw function calls.
  inc_static();
  inc_static();
  inc_static();

  // extern
  /*extern int j;
  printf("%d",j); //undefined reference to `j'ERROR!*/

  extern int
      j; // once its declared with extern keyword, it searches for value stored.
  printf("%d", j);
}
int j = 90; // extern
