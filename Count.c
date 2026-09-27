#include <stdio.h>  // Header file for input output.
int main(){
    int n, count=0;// Declare variable .
    printf("Enter a number:");// Ask the user to enter the number.
    scanf("%d",&n);// Takes the input and stores the value to the variable.
    while(n>0){ // Repeats the value until the value of the n becomes zero.
        n = n/10; // Removes the last digit.
        count++; // Increase the digit count by 1.
    }
    printf("Count=%d",count);// Display the total count of the digit.
    return 0;//End of the program.
}