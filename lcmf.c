#include <stdio.h>
int gcd(int a, int b) { // Define the function to calculate the Greatest Common Divisor (GCD) using the Euclidean algorithm
int c; // Declare a temporary variable 'c' to store the remainder of the division
while (b != 0) { // Keep looping until the divisor 'b' becomes 0
c = a % b; // Compute the remainder of 'a' divided by 'b' and assign it to 'c'
a = b; // Move the value of 'b' into 'a' so it becomes the dividend in the next iteration
b = c; // Move the remainder 'c' into 'b' so it becomes the new divisor
}
return a; // Return 'a', which holds the last non-zero remainder representing the final GCD
}
int lcm(int a, int b) { // Define the function to calculate the Least Common Multiple (LCM)
int lcm; // Declare a local variable to store the calculated LCM value
lcm = a * b / gcd(a, b); // Use the mathematical formula: (a * b) / GCD(a, b) to compute the LCM
return lcm; // Return the final computed LCM value back to the caller
}
int main() {
int x = 12, y = 18, result; // Initialize my test numbers 'x' with 12, 'y' with 18, and declare 'result' to hold the LCM
result = lcm(x, y); // Pass my two numbers into the lcm function and store the returned value inside 'result'
printf("LCM=%d", result); // Print the final calculated LCM value to the console output
return 0; // Return 0 to signify that my program finished executing successfully
}