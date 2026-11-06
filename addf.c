#include <stdio.h> // Include standard input/output library for printf()

int add(int a, int b); // Function declaration (prototype) of add function

int main() {
    int x = 10, y = 20, result; // Declare integer variables x, y, and result
    
    result = add(x, y); // Call the add function, passing x (10) and y (20) as arguments
    
    printf("Sum=%d", result); // Print the final sum stored in 'result'
    
    return 0; // Return 0 to indicate successful execution of main()
}

// Function definition
int add(int a, int b) {
    int sum; // Declare a local variable to store the sum
    sum = a + b; // Add the two numbers (10 + 20 = 30)
    return sum; // Send the sum back to the main() function
}
