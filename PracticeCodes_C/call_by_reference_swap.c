#include <stdio.h>
int swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
  int x = 2, y = 3;
  printf("Before Swap Call: x: %d, y: %d\n", x, y);
  swap(&x, &y);
  printf("After Swap Call: x: %d, y: %d", x, y);
}
