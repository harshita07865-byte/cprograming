
#include <stdio.h>
// Function definition to calculate a raised to the power of b recursively
int power(int a, int b) {
// Base Case: Any number raised to the power of 0 is 1
if (b == 0) {
return 1;
}
// Recursive Case: Multiply a by the result of a raised to the power of (b-1)
else {
return a * power(a, b - 1);
}
}
int main() {
// Initialize base 'a' to 2, exponent 'b' to 4, and declare result variable
int a = 2, b = 4, result;
// Call the power function with arguments a and b, then store the outcome
result = power(a, b);
// Print the final calculated result to the screen
printf("%d", result);
// Return 0 to signal successful program termination
return 0;
}