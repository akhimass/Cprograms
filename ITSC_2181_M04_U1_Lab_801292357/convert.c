#include <stdio.h>

void printBinary(unsigned int n){
  int i;
  for (i = 31; i >= 0; i--){
    unsigned int bit = (n >> 1) & 1;
    printf("%u", bit);
  }
  printf("\n");
}

int main(){
  unsigned int input1, input2;

  printf("Enter first decimal value: ");
  scanf("%u", &input1);

  printf("Enter second decimal value: ");
  scanf("%u", &input2);

  printf("Binary of input 1: ");
  printBinary(input1);

  printf("Binary of input 2: ");
  printBinary(input2);

  unsigned int andResult = input1 & input2;
  unsigned int orResult = input1 | input2;
  unsigned int xorResult = input1 ^ input2;

  printf("Binary of input1 AND input2: ");
  printBinary(andResult);

  printf("Binary of input1 OR input2: ");
  printBinary(orResult);

  printf("Binary of input1 XOR input2: ");
  printBinary(xorResult);

  return 0;

}