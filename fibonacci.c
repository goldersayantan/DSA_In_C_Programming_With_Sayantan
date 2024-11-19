#include <stdio.h>

// Iterative method to generate Fibonacci series up to n terms
void fibonacci_iterative(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci series (Iterative): ");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// Recursive method to generate Fibonacci series up to n terms
void fibonacci_recursive(int n, int a, int b) {
    if (n == 0) {
        return;
    }
    printf("%d ", a);
    fibonacci_recursive(n - 1, b, a + b);
}

int main() {
    int number;
    
    // Taking user input
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        // Fibonacci using iterative method
        fibonacci_iterative(number);

        // Fibonacci using recursive method
        printf("Fibonacci series (Recursive): ");
        fibonacci_recursive(number, 0, 1);
        printf("\n");
    }

    return 0;
}
