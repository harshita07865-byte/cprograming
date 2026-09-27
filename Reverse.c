#include <stdio.h>// Header file for input output.
int main(){// execution of the program starts from here.
    int n , digit , rev=0;// declare the variables using int datatype.
    printf("Enter the number:");// Ask the user to enter the number.
    scanf("%d",&n);//Takes input and stores the value to the variable.
    while(n>0){// Repeates the loop until the value of the n becomes zero.
        digit = n%10;// Takes the last digit.
        rev = rev*10+digit;//  Add the last digit to the reverse number.                                                                                                                                          
        n = n/10;// Removes the last digit from the number.
    }
    printf("Reverse=%d",rev);// Prints the reverse number.
    return 0;// End of the program.
}