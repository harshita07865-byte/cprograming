#include <stdio.h>// Header file for input output .
int main(){// Execution of the program starts here.
    int a[2][2]={{1,2},{4,5}};// declare array of 2 rows and 2 columns.
    int i,j,temp;//Declare loop counter and temporary variable to swap the elements.
    for(i=0;i<2;i++){// Interchange the elements of rows.
        temp = a[0][i];//temporaray stores the values of 1 row.
        a[0][i] = a[1][i];// copy the element of row 2 to 1.
        a[1][i] = temp;// stores the element of row 1 to 2.
    }
    for(i=0;i<2;i++){// outer loop controls rows.
        for(j=0;j<2;j++){// inner loop controls columns.
            printf(" %d",a[i][j]);// takes and prints each element to its position.
        }
        printf("\n");// after the inner loop is completed the loop moves to the next line.
    }
    return 0;// end of the program.
}