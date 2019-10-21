#include <stdio.h>
int main (void) {
  int i;
  for(i = 1 ; i <= 1000 ; i++) {
    printf("%3d ", i);
    if (i % 10 == 0)
      puts("");
  }

  return 0;
}
