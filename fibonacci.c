#include <stdio.h>
int fibonacci(int n); // Declare the function prototype to let main() know the 'fibonacci' function exists
int main() {
int n = 5; // Set the total number of terms I want to print in the series to 5
fibonacci(n); // Call my function to compute and print the Fibonacci sequence for 'n' terms
return 0; // Return 0 to signify that my program finished executing successfully
}
int fibonacci(int n) { // Define the function logic to generate and display the series sequence
int a = 0, b = 1, c; // Initialize the first term 'a' to 0, second term 'b' to 1, and declare a temporary variable 'c'
int i; // Declare my loop counter variable 'i'
for (i = 0; i < n; i++) { // Run a loop that repeats exactly 'n' times to print each term sequentially
printf("%d", a); // Print the current term stored in 'a' to the console output
c = a + b; // Calculate the next term in the sequence by adding the two previous terms together
a = b; // Shift my focus forward by updating 'a' to hold the value of the current second term 'b'
b = c; // Update 'b' to hold the value of the newly calculated next term 'c'
}
}