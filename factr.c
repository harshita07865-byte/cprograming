#include <stdio.h> // Include standard input-output library for printf

// Function prototype declaration: tells the compiler that fact() takes an integer and returns an integer
int fact(int n); 

int main(){
    int result;    // Variable to store the calculated factorial value
    int n = 5;     // Initialize the number whose factorial I want to find

    result = fact(n); // Call the fact function passing 5 as the argument and store the returned value

    printf("Factorial=%d", result); // Print the final calculated factorial value to the screen
    return 0;      // Return 0 to indicate successful program execution
}

// Function definition to calculate factorial using recursion
int fact(int n){
    // Base Case: If n is 0, the factorial is 1. This stops the recursion.
    if(n == 0){ 
        return 1;  // Return 1 back to the previous function call
    } 
    // Recursive Case: If n is greater than 0, multiply n by the factorial of (n-1)
    else{ 
        return n * fact(n - 1); // Function calls itself with a decremented value (n-1)
    } 
}
