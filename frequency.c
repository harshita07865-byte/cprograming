#include <stdio.h>// Header file for input output function.
int main(){// Execution of the program starts.
    int a[5],i,search;// Declaration of array and variables.
    int count=0;// Declaration of the counter varaiable.
    printf("Enter the elements:");//prints the elements.
    for(i=0;i<5;i++){// Takes only 5 elements.
        scanf("%d",&a[i]);//Takes input and stores to the array.
    }
    printf("Enter element to find frequency:");
    
        scanf("%d",&search);

    for(i=0;i<5;i++){// checks every element.
        if(a[i] == search){//if element matches.
            count++;// increases count frequency.
        }
    }
    printf("Frequency number%d:",count);//prints the count of frequency.
    return 0;
}