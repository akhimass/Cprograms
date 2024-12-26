#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones);

int main(){
  int amount;
  int twenties, tens, fives, ones;

  printf("Enter dollar amount to pay: ");
  scanf("%d", &amount);

  calc_bills(amount, &twenties, &tens, &fives, &ones);

  printf("You need:\n");
  printf("$20 dollar bills: %d\n", twenties);
  printf("$10 dollar bills: %d\n", tens);
  printf("$5 dollar bills: %d\n", fives);
  printf("$1 dollar bills: %d\n", ones);
  
  return 0;

}

void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones){
  *twenties = dollar_amount / 20;
  dollar_amount = dollar_amount % 20;

  *tens = dollar_amount / 10;
  dollar_amount = dollar_amount % 10;

  *fives = dollar_amount / 5;
  dollar_amount = dollar_amount % 5;

  *ones = dollar_amount;
}