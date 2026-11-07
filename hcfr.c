#include <stdio.h>
// Function definition to calculate the Highest Common Factor (HCF) using the Euclidean algorithm
int hcf(int a, int b) {
// Base Case: If the second number becomes 0, the current value of 'a' is the HCF
if (b == 0) {
return a;
}
// Recursive Case: Pass 'b' as the new first number and the remainder (a % b) as the new second number
else {
return hcf(b, a % b);
}
}
int main() {
// Initialize the two numbers to 12 and 8, and declare the result variable
int a = 12, b = 8, result;
// Call the recursive hcf function and store the returned value
result = hcf(a, b);
// Print the calculated HCF to the console
printf("HCF=%d", result);
// Return 0 to indicate that the program completed successfully
return 0;
}