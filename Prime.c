#include<stdio.h>// Header file for input output function.
int main(){// main function starts here.
    int n, i=1, count=0;//Declare the variables with int datatype.
    printf("Enter the number:");// Ask the user to enter the number;
    scanf("%d",&n);// Takes the input and stores the value to n variable.
    while(i<=n){ // i should be less then n.
        if(n%i==0)// Checks if the n is completely divisible by i.
        count++;// increase the count if i is a factor of n.
        i++;// icreases i by 1.
    }
    if(count==2){// if count is 2 then it is a prime numbers.
        printf("Prime number");
    }
    else{
        printf("Not a prime number");// otherwise not a prime number.
    }
    return 0;   
}