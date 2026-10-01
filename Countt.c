#include <stdio.h>// Header file for input output function
int main(){// Execution of the program starts.
    int a[5],positive=0,negative=0,zero=0,i;// Declaration od array and variables.
    printf("Enter the numbers:");//Ask the user to enter the number.
    for(i=0;i<5;i++){// Takes on;y 5 numbers.
        scanf("%d",&a[i]);// Takes the input and stores to the array.
    
    if(a[i]>0){// Condition for +ve value.
        positive++;// increases the count by 1
    }
    else if(a[i]<0){// Condition for -ve value.
        negative++;//increases the count by 1
    }
    else{// if value is 0.
        zero++;//increases the count by 1
    }
    }
    
    printf("Positive count=%d\n",positive);// Prints count of positive numbers.
    printf("Negative count=%d\n",negative);// Prints count of negative numbers.
    printf("Zero count=%d\n",zero);// Prints count of zero numbers.
    return 0;//End of the program.
}