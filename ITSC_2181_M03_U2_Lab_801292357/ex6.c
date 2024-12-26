#include <stdio.h>
int main(void){
  char str[] = "UNC Charlotte";

  for (int i = 0; str[i] != '\0'; i++){
    printf("%c\n", str[i]);
  }
  return 0;
}