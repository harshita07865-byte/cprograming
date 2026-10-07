#include <stdio.h>//Header file for input and ouput.
int main(){// Execution of the program starts.
    int i,j,n,a[100],temp;// Declaration of array and variable.
    printf("Enter the number of elements:");// number of elements to print.
    scanf("%d",&n);//takes the input and stores to the n variable.
    printf("Enter the elements:");// prints the elements.
    for(i=0;i<n;i++){// loop takes elements acc to the condition.
        scanf("%d",&a[i]);//takes input and stores to array.
    }
    for(i=0;i<n-1;i++){// Outer loop for passes.
        for(j=0;j<n-1-i;j++){//Inner loop for comparison.
            if(a[j]>a[j+1]){// if element is bigger.
                temp = a[j];// stores element to temp.
                a[j] = a[j+1];//Stores smaller digit to left side.
                a[j+1] = temp;//Stores larger digit to right side.
            }
        }
    }
    printf("Array in asc order:");//prints in ascending order.
    for(i=0;i<n;i++){// displays the sorted array
        printf("%d",a[i]);
    }
    return 0;// end of the program.
    
}