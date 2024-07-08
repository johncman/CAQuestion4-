#include "mbed.h"

int main() {
    // Initialise int variables a, b, c
    int a = 10;
    int b = 20;
    int c = 30;

    // Add values of a and b, store in a new int variable d
    int d = a + b;
    // Print value of variable d
    printf("Value of d (a + b) = %d\n", d);

    // Subtract variable c from d, store in a new int variable e
    int e = d - c;
    // Print value of variable e
    printf("Value of e (d - c) = %d\n", e);

    // Keep the program running
    while (true) {
        // Continue loop
    }
}
