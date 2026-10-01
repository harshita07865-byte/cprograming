#include <stdio.h>// Header file for input output function.
int main(){// Execution of the program starts.
    int a[5],i;// Declaration of the array and loop counter.
    printf("Enter the 5 elements:");//Ask the user to enter the number.
    for(i=0;i<5;i++){// takes only 5 numbers.
        scanf("%d",&a[i]);// Takes input and stores to the array.
    }
    for(i=4;i>=0;i--){// Checks the element and reverse it.
        printf("Reverse=%d",a[i]);// Prints reverse value.
    }
    return 0;// End of the program.
}