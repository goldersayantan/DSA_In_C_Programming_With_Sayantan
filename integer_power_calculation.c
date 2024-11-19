#include <stdio.h>

// Iterative method to calculate power
int power_iterative(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

// Recursive method to calculate power
int power_recursive(int base, int exp) {
    if (exp == 0) {
        return 1;  // Base case: any number raised to the power of 0 is 1
    } else {
        return base * power_recursive(base, exp - 1);  // Recursive call
    }
}

int main() {
    int base, exp;

    // Taking user input
    printf("Enter the base and exponent: ");
    scanf("%d %d", &base, &exp);

    // Handling negative exponent case for iterative and recursive methods
    if (exp < 0) {
        printf("Exponent should be non-negative.\n");
    } else {
        // Power using iterative method
        int result_iter = power_iterative(base, exp);
        printf("Result (Iterative): %d^%d = %d\n", base, exp, result_iter);

        // Power using recursive method
        int result_recur = power_recursive(base, exp);
        printf("Result (Recursive): %d^%d = %d\n", base, exp, result_recur);
    }

    return 0;
}
