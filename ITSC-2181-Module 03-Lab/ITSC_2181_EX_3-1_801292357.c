#include <stdio.h>

int main(void) {
  char str[3];
  float floatNum;
  int intNum;

  printf("Enter two characters, a space, a float, a space, and a decimal:\n");
  scanf("%2s %f %d", str, &floatNum, &intNum);

  printf("%2s\n", str);
  printf("%f\n", floatNum);
  printf("%d\n", intNum);
  
  return 0;
}