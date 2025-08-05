#include <stdio.h>
int main() {
  // Pointer to constant data
  int a = 5, b = 2;
  const int *ptr = &a;
  ptr = &b;
  //*ptr = 6;
  printf("%d %p\n", *ptr, ptr);

  // Constant pointer to data
  int *const p = &a;
  *p = 6;
  // p = &b;
  printf("%d %p\n", *p, p);

  // Constant pointer to constant data
  const int *const pptr = &a;
  //*pptr = 6;
  // pptr = &b;
}
