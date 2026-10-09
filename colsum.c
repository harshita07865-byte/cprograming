#include <stdio.h>// Header file for input output.
int main(){      // execution of the program starts
    int a[2][3] = {{1,2,3},{2,3,4}};// dec of array.
    int i,j,sum;// dec of variables.
    printf("Matrix:\n");// display the matrix
    for(i=0;i<2;i++){// outer loop for rows.
        for(j=0;j<3;j++){//Inner loop for columns.
            printf("%d", a[i][j]);
        }
        printf("\n");// Move to the next line.
    }
        for(j=0;j<3;j++){// Outer loop selects each column.
            sum =0;//initialize sum to 0 for each column.
            for(i=0;i<2;i++){// Inner loop moves through each row.
            sum = sum + a[i][j];//ADDs the element of each column.
            }
            printf("Sum of column%d = %d",j+1,sum);// Displays the element.
            printf("\n");// Move to the next line.
        }
    
    return 0;// End of the program.
}