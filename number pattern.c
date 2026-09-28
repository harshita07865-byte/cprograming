#include <stdio.h>// Header file for input output function.
int main(){
    int i=1;// Declare the variable.
    while(i<=5){// Outer loop controls the rows.
        int j=1;
     while(j<=i){// inner loop resets to 1 at the start of every new row.
        printf("%d",j);//Prints the column number.
        j++;// increment of j to move to the next number in the row.
     }
     printf("\n");// prints to the next line.
     i++;// increment of i to the next row.
    }
    return 0;// End of the program.
}