#include <stdio.h>// Header file for input output.
int main(){// Execution of the program starts here.
    int n , original, digit,rev=0;// Declare the variables.
    printf("Enter the number:");// Takes number from the user.
    scanf("%d",&n);// Takes input and stores the value to the n variable.
     original = n;// original is equal to n.
     while(n>0){// Repeates the loop until the number becomes zero.
        digit = n%10;//Takes the last digit.
        rev = rev*10+digit;// Build the reverse number.
        n = n/10;// Removes the last digit.
     }
     if(original==rev){// original number should be equal to reverse number.
        printf("Palindrome number");// If both are same.
     }
     else{
        printf("Not a palindrome");// If both are diff
     }
     return 0;// End of the program.
}