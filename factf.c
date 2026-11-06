#include <stdio.h> // Include standard input/output library for printf()

int fact(int n); // Function declaration (prototype) of the fact function

int main() {
    int x = 5, result; // Declare integer variables: x initialized to 5, and result to store the output
    
    result = fact(x); // Call the fact function, passing x (5) as an argument
    
    printf("Factorial=%d", result); // Print the calculated factorial stored in 'result'
    
    return 0; // Return 0 to indicate successful execution of main()
}

// Function definition to calculate factorial using a loop
int fact(int n) {
    int i, fact = 1; // Declare loop counter 'i' and initialize 'fact' to 1
    
    // Loop runs from 1 up to the number 'n' (5)
    for (i = 1; i <= n; i++) {
        fact = fact * i; // Multiply the running total by the current value of 'i'
    }
    
    return fact; // Send the final factorial result back to the main() function
}
