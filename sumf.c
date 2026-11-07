
#include <stdio.h>
int sum(int n); // Declare the function prototype to let main() know the 'sum' function exists
int main() {
int n = 1234, result; // Initialize my test number 'n' with 1234 and declare 'result' to hold the final sum
result = sum(n); // Pass 'n' into my function and store the returned sum of the digits inside 'result'
printf("Sum=%d", result); // Print the final calculated sum of the digits to the console output
return 0; // Return 0 to indicate that my program has executed successfully
}
int sum(int n) { // Define the function logic to calculate the sum of the digits for the integer 'n'
int sum = 0, digit; // Initialize my running sum accumulator to 0 and declare a variable for single digit extraction
while (n > 0) { // Keep running the loop as long as there are digits left in 'n' (greater than 0)
digit = n % 10; // Isolate the rightmost digit of 'n' by taking the remainder of division by 10
sum = sum + digit; // Add the extracted digit directly to my running total 'sum'
n = n / 10; // Eliminate the processed rightmost digit from 'n' using integer division by 10
}
return sum; // Return my completed total sum back to the main calling function
}