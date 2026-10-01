#include <stdio.h>// Standard input output function
int main(){// Execution of the program starts.
    int a[5],i,search;// Declaration of array,loop counter and search variablr;
    int found = 0;//Declaration of found variable.
    printf("Enter 5 numbers:");//Ask the user to enter the name.
    for(i=0;i<5;i++){// Loop to take 5 elements.
        scanf("%d",&a[i]);// Stores number in array.
    }
    printf("Enter number to search:");// Ask user to enter number to search.
    scanf("%d",&search);// Takes the number and stores to search variable.
    for (i=0;i<5;i++)// Check every array element.
    {
        if(a[i] == search)// Compare array element with search value.
        {
            found = 1;// 1 means element is found.
            break;// Stops the loop  after  finding the element.
        }
    }
    if(found == 1) //Check whether element is found.
    {
        printf("Element found");
    }
    else{
        printf("NOt found");
    }
    return 0;//End of the program.
}