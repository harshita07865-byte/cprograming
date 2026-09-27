#include <stdio.h>
int main(){
    int n, sum=0,digit,org;//Declare variables with int datatype.
    printf("Enter the number:");// Ask the user to enter the number.
    scanf("%d",&n);// Takes the input and stores the value to n variable.
    org = n;// original value should be equal to n.
    while(n>0){// loop repeates until the n becomes zero.
        digit = n%10;// Takes the last digit from the number.
        sum = sum + digit*digit*digit;// adds sum with cuberoot of digit
        n = n/10;// Removes the last digit.
    }
    if(org==sum){
        printf("Armstrong number");// if cuberoot of digits is eqaul to original number then it is an armstrong number.
    }
    else{
        printf("Not an armstrong number");// Otherwise not an armstrong number.
    }
    return 0;// End of the program.
}