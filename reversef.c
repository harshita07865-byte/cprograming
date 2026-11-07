#include <stdio.h>
int reverse(int n); // Declare the function prototype to let main() know the 'reverse' function exists
int main() {
int result; // Declare an integer variable to store the final flipped number
int n = 12345; // Initialize my test number 'n' with the value 12345
result = reverse(n); // Pass 'n' into my function and capture the returned reversed integer in 'result'
printf("Reverse value = %d", result); // Print out the final reversed value stored in my result variable
return 0; // Return 0 to indicate that my program has executed successfully
}
int reverse(int n) { // Define the function logic to flip the digits of my integer 'n'
int digit, rev = 0; // Declare a variable for the extracted digit and initialize my reversed number accumulator to 0
while (n > 0) { // Keep processing as long as 'n' has digits remaining (greater than 0)
digit = n % 10; // Extract the rightmost digit of 'n' by taking the remainder of division by 10
rev = rev * 10 + digit; // Shift my current reversed total left by multiplying by 10, then add the extracted digit
n = n / 10; // Fixed: Changed 'n10' to 'n / 10' to remove the last digit via integer division so the loop can terminate
}
return rev; // Return my completed reversed integer back to the main calling function
}