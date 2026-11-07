#include <stdio.h>
int palindrome(int n); // Declare the function prototype so main() knows the 'palindrome' function exists
int main() {
int n = 121; // Set the integer variable 'n' to 121 to use as my test case
if (palindrome(n)) { // Pass 'n' into my function; check if the returned value evaluates to true (1)
printf("The number is palindrome"); // Print this message if the number is identical when reversed
} else {
printf("Not a palindrome"); // Print this message if the reversed number is different from the original
}
return 0; // Return 0 to indicate that my program has executed successfully
}
int palindrome(int n) { // Define the function logic to check if my integer 'n' is a palindrome
int original = n, rev = 0, digit; // Backup the initial value of 'n', set up my reversed number accumulator to 0, and declare a digit variable
while (n > 0) { // Continue processing as long as 'n' has digits remaining (greater than 0)
digit = n % 10; // Isolate the last digit of 'n' by taking the remainder of division by 10
rev = rev * 10 + digit; // Multiply my current reversed total by 10 to shift it left, then add the new digit
n = n / 10; // Eliminate the last digit from 'n' by dividing it by 10 (integer division drops the decimal)
}
return original == rev; // Compare my saved original number with my calculated reverse, returning 1 if they match and 0 if they do not
}