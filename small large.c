#include <stdio.h>// Header file for input output function.
int main(){// Execution of the program starts.
    int i,a[5],largest,smallest;// Declaration of the array,Largest and smallest variable.
    printf("Enter the number:");//Ask the user to enter the number.
    for(i=0;i<5;i++){// Takes only 5 numbers.
        scanf("%d",&a[i]);// Takes the input and stores to array 
    }
    for(i=0;i<5;i++){// Checks the element
    largest = a[0];// Taking first number as largest.
    smallest = a[0];// Taking First number as smallest.
    if(a[i]>largest){// Check for larger element.
        largest = a[i];
    }
    if(a[i]<smallest){// Check for smaller element.
        smallest = a[i];
    }
}
printf("Largest=%d\n",largest);//Prints the largest element.
printf("Smallest=%d\n",smallest);// Prints the smallest element.
return 0;// End of the program.
}