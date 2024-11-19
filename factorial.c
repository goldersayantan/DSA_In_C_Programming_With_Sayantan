#include <stdio.h>

// Iterative method to calculate factorial
int factorial_iterative(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Recursive method to calculate factorial
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1 and 1! = 1
    } else {
        return n * factorial_recursive(n - 1); // Recursive call
    }
}

int main() {
    int number;
    
    // Taking user input
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);
    
    // Checking if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculating factorial using iterative method
        int fact_iter = factorial_iterative(number);
        printf("Factorial (iterative) of %d is: %d\n", number, fact_iter);

        // Calculating factorial using recursive method
        int fact_recur = factorial_recursive(number);
        printf("Factorial (recursive) of %d is: %d\n", number, fact_recur);
    }

    return 0;
}
