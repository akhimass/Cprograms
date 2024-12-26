#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[100];
    int sum = 0;
    int average;

    // seed random number generator
    srand(time(0));

    // generate 100 random ints stored in array
    for (int i = 0; i < 100; i++) {
        numbers[i] = rand();  // generate random int
    }

    // sum of the integers in  array
    for (int i = 0; i < 100; i++) {
        sum += numbers[i];
    }

    // calculate average
    average = sum / 100;

    printf("Average of 100 random integers is: %d\n", average);

    return average;
}