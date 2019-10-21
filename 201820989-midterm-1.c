#include <stdio.h>
int main (void) {
  int  num1, num2;
  int  aver = 0;
  printf("2개의 실수를 입력하세요 : ");
  scanf("%d %d", &num1, &num2);

  aver = (num1 + num2) / 2;
  printf("평균 : %f \n", (double)aver);

  return 0;
}
