#include "mbed.h"

int main() {
    // Initialise int variables a, b, c
    int a = 10;
    int b = 20;
    int c = 30;

    // Add values of a and b, store it in a new int variable d and print value of variable d
    int d = a + b;
    // Print value of variable d
    printf("Value of d (a + b) = %d\n", d);

    // Subtract variable c from d and store in new int variable e and print the value of variable e
    int e = d - c;
    // Print value of variable e
    printf("Value of e (d - c) = %d\n", e);

}
