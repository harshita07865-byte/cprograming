#include <stdio.h>
int armstrong(int n); // Declare the function prototype to let main() know the 'armstrong' function exists
int main() {
int n = 153; // Initialize the integer variable 'n' to 153 to use as my test case
if (armstrong(n)) { // Pass 'n' to my function; check if the returned value evaluates to true (1)
printf("Armstrong"); // Print this message if the sum of the cubes of its digits equals the original number
} else {
printf("Not an armstrong"); // Print this message if the calculated sum does not match the original number
}
return 0; // Return 0 to indicate that my program has executed successfully
}
int armstrong(int n) { // Define the function logic to check if my integer 'n' is an Armstrong number
int digit, sum = 0, original = n; // Declare variables for extraction, set my running sum accumulator to 0, and back up 'n'
while (n > 0) { // Continue looping as long as 'n' has digits remaining (greater than 0)
digit = n % 10; // Isolate the rightmost digit of 'n' by taking the remainder of division by 10
sum = sum + digit * digit * digit; // Cube the isolated digit and add the result to my running total 'sum'
n = n / 10; // Eliminate the rightmost digit from 'n' by performing integer division by 10
}
return original == sum; // Compare my saved initial number with my computed sum, returning 1 if they match and 0 if they don't
}