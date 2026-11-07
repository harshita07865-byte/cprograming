#include <stdio.h>

// Function definition to reverse a number recursively using an accumulator
int rev(int n, int reverse) {
    // Base Case: If the number becomes 0, return the fully accumulated reversed number
    if (n == 0) {
        return reverse;
    }
    // Note: The original expression (n/10, rev*10+n%10) uses the comma operator,
    // which discards the first part (n/10) and only evaluates the second part.
    // To properly reverse the number recursively, I should pass the values as function arguments.
    else {
        // Correct recursive call: strip the last digit from n, and shift the accumulator left before adding the digit
        return rev(n / 10, reverse * 10 + n % 10);
    }
}

int main() {
    // Initialize the number to reverse and declare the result variable
    int n = 12345, result;

    // Call the recursive function starting with an initial accumulator value of 0
    result = rev(n, 0);

    // Print the final reversed value to the console
    printf("%d", result);

    // Return 0 to indicate successful execution
    return 0;
}
