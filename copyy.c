#include <stdio.h>// For input output.
int main(){// Execution of the program starts.
    int a[5], b[5],i;// declare two arrays and loop variable.
    printf("Enter the elements:\n");// Ask the user to enter the elements.
    for(i=0;i<5;i++){// Takes input in first array.
        scanf("%d",&a[i]);// Takes input and stores to the array.
    }
    for(i=0;i<5;i++){// Copy each element.
        b[i]=a[i];
    }
    printf("Second array:");// prints the second array
    for(i=0;i<5;i++){// Display the array.
        printf("%d",b[i]);
    }
    return 0;// End of the program.
}