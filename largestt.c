#include <stdio.h>// for input and output.
int main(){// execution of the program starts.
    int a[5],i,largest,second;// Declaration of array and largest and smallest.
    printf("Enter the elements:");// Ask the user to enter the elements.
    for(i=0;i<5;i++){// Takes the input.
        scanf("%d", &a[i]);// Takes input and stores to the array.
    }
    largest = a[0];// largest = 1st number.
    second = a[0];// second = 1st number.
    for(i=1;i<5;i++){// loop runs from 1 index.
        if(a[i]>largest){// compare  to find largest.
            second = largest;// putting the old value of largest to second.
            largest = a[i];// largest value.
        }
        else if(a[i]>second && a[i]!= largest){
            second = a[i];// update second largest value.
        }
    }
    
        printf("Second largest:%d\n",second);// prints the largest value.
    
    return 0;// end of the program.
}