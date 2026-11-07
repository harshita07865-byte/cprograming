#include <stdio.h>
int HCF(int a, int b); // Declare the function prototype to let main() know the 'HCF' function exists
int main() {
int result; // Declare an integer variable to store the calculated Highest Common Factor
int x = 12, y = 18; // Initialize my two test numbers 'x' with 12 and 'y' with 18
result = HCF(x, y); // Pass my two numbers into the function and capture the returned HCF value in 'result'
printf("HCF=%d", result); // Print the final calculated HCF value to the console output
return 0; // Return 0 to indicate that my program has completed successfully
}
int HCF(int a, int b) { // Define the function logic to calculate HCF using the Euclidean division algorithm
int c; // Declare a temporary variable 'c' to store the remainder of the division
while (b != 0) { // Continue looping until the divisor 'b' becomes 0
c = a % b; // Compute the remainder of 'a' divided by 'b' and assign it to 'c'
a = b; // Move the value of 'b' into 'a' so it becomes the dividend in the next step
b = c; // Move the remainder 'c' into 'b' so it becomes the new divisor
}
return a; // Return 'a', which holds the last non-zero remainder representing the final HCF
}