#include <stdio.h>

int main() {
    int sum = 0;

    // loop to add integers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }

    printf("Sum from 1 to 100 is: %d\n", sum);

    return sum;
}