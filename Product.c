#include <stdio.h>// Header file for input output function.
int main(){// Execution of the program starts here.
    int n,digit,product=1;// Declare the variable with int datatype.
    printf("Enter a number:");// Ask the user to enter the number.
    scanf("%d",&n);// Takes the input and stores the value to the n variable.
    while(n>0){// Repeates the value until the value of the n becomes zero.
        digit = n%10;// Takes the last digit of the number.
        product = product*digit;//Multiply the digit with product.
        n = n/10;// TRemoves the last digit.
    }
    printf("Product=%d",product);//Display the product of all the digit.
    return 0;//End of the program.
}