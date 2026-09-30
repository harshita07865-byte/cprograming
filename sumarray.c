#include <stdio.h>// Header file for input output
int main(){// Execution of the program starts.
    int a[5],i,sum=0;// Declare the the array,loop counter and intitalize sum to 0.
    printf("Enter the numbers:");//Ask the user to enter the number.
    for(i=0;i<5;i++){//Loop runs 5 times to take the input.
        scanf("%d",&a[i]);//Takes input and stores to array.
        sum = sum+a[i];//Add each array element to sum.
    }
    printf("Sum=%d",sum);//Display the final sum.
    return 0;//End of the program.
}