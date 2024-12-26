#include <stdio.h>

int main (void){ 
    float arr[5];
    float sum = 0.0, average;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++ ){
        printf("Number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < 5; i++){
        sum += arr[i];
    }
    average = sum / 5;

    printf("The sum is: %.2f\n", sum);
    printf("The average is: %.2f\n", average);

    return 0;
}