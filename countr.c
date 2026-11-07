#include <stdio.h>
// Function definition to count the number of digits recursively by dividing by 10
int count(int n) {
// Base Case: Once the number reduces to 0, stop recursion and return 0
if (n == 0) {
return 0;
}
// Recursive Case: Add 1 for the current digit and call count with the remaining digits
else {
return 1 + count(n / 10);
}
}
// Fixed placement: The main function must be defined outside of the count function
int main() {
// Initialize the number to test and declare the result variable
int n = 12345, result;
// Explicitly handle 0 since the recursive count function returns 0 for a value of 0
if (n == 0) {
result = 1;
}
// Call the recursive function for any non-zero numbers
else {
result = count(n);
}
// Print the final digit count to the console
printf("Count = %d", result);
// Return 0 to indicate that the program terminated successfully
return 0;
}