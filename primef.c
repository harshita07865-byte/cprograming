#include <stdio.h>

int prime(int n); // Function prototype to declare the 'prime' function before main()

int main() {
    int n = 6; // Initialize the test number 'n' with value 6

    if (prime(n)) { // Call prime() function; if it returns 1 (true)
        printf("Prime number"); // Print that 'n' is a prime number
    } else {
        printf("Not a prime number"); // Otherwise, print that 'n' is not a prime number
    }

    return 0; // Exit the program successfully
}

int prime(int n) { // Function definition to check if 'n' is prime
    int i; // Declare loop variable 'i'

    if (n < 0) { // Check if the number is negative
        return 0; // Return 0 (false) because negative numbers are not prime
    }

    for (i = 2; i < n; i++) { // Loop 'i' from 2 up to n - 1
        if (n % i == 0) { // If 'n' is cleanly divisible by 'i'
            return 0; // Return 0 (false) because it has a factor other than 1 and itself
        }
    }

    return 1; // Return 1 (true) if no factors were found, meaning it is prime
}
