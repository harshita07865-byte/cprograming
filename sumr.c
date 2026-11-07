#include <stdio.h>

// Function declaration  for the recursive function
int sum(int n);

int main() {
    int n = 5, result;

    // Call the sum function with 5 as the argument and store the returned value
    result = sum(n);

    // Print the calculated sum to the console
    printf("Sum = %d", result);

    // Return 0 to indicate that the program executed successfully
    return 0;
}

// Function definition to calculate the sum of numbers from n down to 1 recursively
int sum(int n) {
    // Base Case: If n drops to 0, stop recursion and return 0
    if (n == 0) {
        return 0;
    }
    // Recursive Case: Add current n to the sum of (n-1)
    else {
        return n + sum(n - 1);
    }
}
