#include <stdio.h>

int main(void) {
  int userGrade;

  printf("Please enter a numeric grade: \n");
  scanf("%d", &userGrade);

  if (userGrade >= 90){
    printf("The letter grade is an A.\n");
  }else if (userGrade >= 80 && userGrade < 90){
    printf("The letter grade is a B.\n");
  }else if (userGrade >= 70 && userGrade < 80){
    printf("The letter grade is a C.\n");
  }else if (userGrade >= 60 && userGrade < 70){
    printf("The letter grade is a D.\n");
  }else if (userGrade <= 59){
    printf("The letter grade is a F.\n");
  } else {
    return 0;
  }
}

