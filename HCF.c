#include<stdio.h>// Header file for input output function.
int main(){// execution of the program starts here.
    int a,b, rem,hcf;// Declare the variables with int datatype.
    printf("Enter the two numbers:");// Ask the user to enter the number.
    scanf("%d %d",&a,&b);// Takes the input and stores the value to a and b variable.
    while(b !=0){ // b shouldnot be equal to zero.
        rem = a%b; // Gives the reminader by dividing a and b.
        a = b;// a takes the value of b;
        b = rem;//b takes the value of rem;
    }
    hcf = a;
    printf("HCF=%d",hcf);
    return 0;
}