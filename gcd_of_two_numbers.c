#include <stdio.h>

// Iterative method to calculate GCD
int gcd_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Remainder of a divided by b
        a = temp;   // Assign b to a
    }
    return a;
}

// Recursive method to calculate GCD
int gcd_recursive(int a, int b) {
    if (b == 0) {
        return a;  // Base case: when b becomes 0, gcd is a
    } else {
        return gcd_recursive(b, a % b);  // Recursively call with b and remainder of a divided by b
    }
}

int main() {
    int num1, num2;
    
    // Taking user input
    printf("Enter two numbers to calculate their GCD: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculating GCD using iterative method
    int gcd_iter = gcd_iterative(num1, num2);
    printf("GCD (Iterative) of %d and %d is: %d\n", num1, num2, gcd_iter);
    
    // Calculating GCD using recursive method
    int gcd_recur = gcd_recursive(num1, num2);
    printf("GCD (Recursive) of %d and %d is: %d\n", num1, num2, gcd_recur);
    
    return 0;
}
