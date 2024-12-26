int main(void) {
  int sum = 0;
  int input = 0;

  printf("Current Sum: %d\n", sum);
  printf("Please enter the next number: ");
  scanf("%d", &input);  

  while (input != -1){
    sum += input;
    printf("Current Sum: %d\n", sum);
    printf("Please enter the next number: ");
    scanf("%d", &input);  
  }
  printf("Done! Final sum: %d\n", sum);
  return 0;
}