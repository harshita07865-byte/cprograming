#include <stdio.h>// Header file for input output
int main(){// Execution of the program starts.
    int a[5],largest,i;//Declare array,loop variable,largest
    printf("Enter the numbers:");// Ask the user to enter the number.
    for(i=0; i<5; i++){//  Takes 5 number.
        scanf("%d",&a[i]);// Takes input and stores to array.
    }
    largest = a[0];// Largest = to 1st number
    for(i=1;i<5;i++){
        if(a[i]>largest){// comparing with the first number.
            largest = a[i];// Largest number.
        }
    }
    printf("Largest=%d",largest);// Printd largets number.
    return 0;// End of the program.
}