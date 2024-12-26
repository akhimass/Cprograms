#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 20
#define MAX_PHONE_LENGTH 16
#define MAX_CUSTOMERS 20

struct customer{
char first_name[MAX_NAME_LENGTH + 1];
char middle_name[MAX_NAME_LENGTH + 1];
char last_name[MAX_NAME_LENGTH + 1];
char phone[MAX_PHONE_LENGTH + 1];
float balance;
};

void show_customer (struct customer cust){
  printf("Customer: %s %s %s\n", cust.first_name, cust.middle_name, cust.last_name);
  printf("Phone Number: %s, Balance: $%.2f\n", cust.phone, cust.balance);
}

void show_database (struct customer cust_db[], int size){
  printf("Customer List:\n");
  printf("--------------\n");
  for (int i = 0; i < size; i++){
    show_customer(cust_db[i]);
    printf("--------------\n");
  }
}

int main (void){
  struct customer cust_db[MAX_CUSTOMERS];
  int count = 0;

  while(1){
    char input[MAX_NAME_LENGTH + 1];
    printf("Please enter the next customer record.\n");
    printf(":S Shows the contents of the database\n");
    printf(":X Exits the program\n");
    
    printf("First Name: ");
    scanf("%s", input);

    if (strcasecmp(input, ":X")== 0){
      printf("Good bye!\n");
      break;
    }
    else if (strcasecmp(input, ":S")== 0){
      show_database(cust_db, count);
      continue;
    }

    strcpy(cust_db[count].first_name, input);

    printf("Middle Name: ");
    scanf("%s", cust_db[count].middle_name);

    printf("Last Name: ");
    scanf("%s", cust_db[count].last_name);

    printf("Phone Number: ");
    scanf("%s", cust_db[count].phone);

    printf("Balance: ");
    scanf("%f", &cust_db[count].balance);

    count++;

    if (count >= MAX_CUSTOMERS){
      printf("Customer databse is full.\n");
      break;
    }
  }

  return 0;
}



