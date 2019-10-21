#include <stdio.h>

void Swap(int *a, int *b);
int main (void) {
  int x = 10, y = 5;
  printf("Before \n");
  printf("x = %d, y = %d \n", x, y);

  Swap(&x, &y);

  printf("After \n");
  printf("x = %d, y = %d \n", x, y);

  return 0;
}

void Swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
