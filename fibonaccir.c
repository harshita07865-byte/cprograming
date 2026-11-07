#include <stdio.h>

// Function declaration (prototype) for the factorial function
// It takes an integer as input and returns an integer
int fact(int n);

int main() {
    int result; // Variable to store the calculated factorial value
    int n = 5;  // Input value for which I want to find the factorial

    // Call the fact function with n and store the returned value in result
    result = fact(n);

    // Print the calculated factorial value to the screen
    printf("Factorial=%d", result);

    return 0; // Indicate successful execution of the main program
}

// Function definition to calculate factorial using recursion
int fact(int n) {
    // Base Case: If n is 0, the factorial is explicitly defined as 1
    if (n == 0) {
        return 1; // Terminate recursion and return 1
    } 
    // Recursive Case: If n is greater than 0
    else {
        // The function calls itself with a smaller value (n - 1)
        // and multiplies the result by the current value of n
        return n * fact(n - 1);
    }
}
