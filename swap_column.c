#include <stdio.h>// Header file for input output.
int main(){// Execution of the program starts.
    int a[2][3]={{1,2,3},{4,5,6}};// declare array of 2 rows and three columns.
    int i,j,temp;// Declare counter loops and temporary variable.
   
        for(j=0;j<3;j++){// loop to interchange columns.
         temp = a[j][0];// stores the value of 1 column.
         a[j][0] = a[j][1];// copy the value of column 2 to column 1.
         a[j][1] = temp;// copy the value of column 1 to column 2.
    }
    for(i=0;i<2;i++){// outer loop to control rows.
        for(j=0;j<3;j++){// inner loop to control columns.
            printf(" %d",a[i][j]);// prints the exact value in its correct position.
        }
        printf("\n");//after inner loop finishes the outer loop moves to the next line.
    }
    return 0;// End of the program.
}