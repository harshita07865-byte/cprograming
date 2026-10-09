#include <stdio.h>// Header file for input output.
int main(){      // execution of the program starts
    int a[2][2]={{1,2},{3,7}};//Dec of array.
    int i,j,min;// Dec of variables.
    printf("Matrix:\n");// displays matrix.
    for(i=0;i<2;i++){// loop for rows.
        for(j=0;j<2;j++){// loop for columns.
            printf("%d", a[i][j]);// prints the matrix
        }
        printf("\n");// Moves to the next line.
    }
    min = a[0][0];// initialize the first value as smaller.
    for(i=0;i<2;i++){// loop controls the row.
        for(j=0;j<2;j++){// takes each element of the row.
            if(a[i][j]<=min)// compares the value of element by min value.
            min = a[i][j];// updates the min value.
        }
    }
    printf("Minimum value =%d", min);// displays the smallest value.
    return 0;// end of the program.
}