#include <stdio.h>

int loop() {
    int t0 = 60; // Set t0 to 60
    int t1 = 0;  // Set t1 to 0

    // Loop that increments t1 by 5 and decrements t0 by 1 until t1 == t0
    while (t1 != t0) {
        t1 += 5;  // Increment t1 by 5
        t0 -= 1;  // Decrement t0 by 1
    }

    // Check if t1 is non-zero (success)
    if (t1 != 0) {
        printf("Success: %d\n", 42); // Return code 42 (success)
    } else {
        printf("Failure: %d\n", 0); // Return code 0 (failure)
    }

    return 0;
}