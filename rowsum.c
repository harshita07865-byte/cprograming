#include <stdio.h>// Header file for input output.
int main(){      // execution of the program starts
    int a[4][3],i,j,sum;// declaration of the array and variables.
    printf("Enter the numbers:");// Ask the user to enter.
    for(i=0;i<4;i++){// takes input rows.
        for(j=0;j<3;j++){// takes input columns.
            scanf("%d", &a[i][j]);// stores to the array.
        }
    }
    for(i=0;i<4;i++){// controls the rows.
        sum=0;// Reset sum for each row.
        for(j=0;j<3;j++){// Add elements to current row.
        sum = sum + a[i][j];
        }
        printf("Sum of each row is %d = %d",i+1,sum);// print sum of the current row.
        printf("\n");
    }
    return 0;// end of the program.
}