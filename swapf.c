
#include <stdio.h>
int swap(int *a, int *b); // Declare the function prototype using pointer parameters to pass variables by reference
int main() {
int x = 10, y = 20; // Initialize my local variables 'x' with 10 and 'y' with 20
swap(&x, &y); // Call my swap function, passing the memory addresses of 'x' and 'y' using the address-of operator (&)
printf("After swaping:\n"); // Print a header message to show the numbers have changed
printf("X=%d\n", x); // Print the new swapped value of 'x' to the console
printf("Y=%d", y); // Print the new swapped value of 'y' to the console
return 0; // Return 0 to indicate that my main program finished running successfully
}
int swap(int *a, int *b) { // Define the swap function that receives the memory addresses of my two integers into pointer variables
int temp; // Declare a temporary local integer variable to hold one of the values during the exchange
temp = *a; // De-reference pointer 'a' to fetch the value stored at that address and save it securely in 'temp'
*a = *b; // De-reference pointer 'b' to get its value, and copy it into the memory location pointed to by 'a'
*b = temp; // Copy the initial value saved in 'temp' into the memory location pointed to by 'b'
}