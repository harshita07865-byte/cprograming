#include<stdio.h>// Header file for printf() scanf()
int main(){// Execution of the program starts.
    int a[5],i;//a[5]array to store 5 integers.i = loop counter.
    printf("Enter the number:\n");// Ask the user to enter the number.
    for(i=0;i<5;i++){// loop runs from i =0 to i=4.
        scanf("%d",&a[i]);// Takes input and store it to a[i].
    }
    printf("Array elements are:");// Prints a message before displaying a array.
    for(i=0;i<5;i++){// Loop again to access all 5 elements.
        printf("%d\n",a[i]);//Print each array element.
    }
    return 0;// End of the program.
}