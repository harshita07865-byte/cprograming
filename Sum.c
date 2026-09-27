#include <stdio.h>// Header file for input output.
int main(){
    int n,sum=0,digit;// Declare variable.
    printf("Enter a number:");// Ask the user to enter the number.
    scanf("%d",&n);// Take number as a input and stores the value to n variable.
    while(n>0){// Repeates until the number becomes  zero.
        digit = n%10;// Gets the last digit.
        sum = sum+digit;// Add the digit to the sum.
        n = n/10;// Removes the last digit.
    }
    printf("Sum=%d",sum);// Display the sum of the digits.
    return 0;// End of the program.
}