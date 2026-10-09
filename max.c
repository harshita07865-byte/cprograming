#include <stdio.h>// Header file for input output.
int main(){      // execution of the program starts
    int a[2][3]= {{1,2,3},{3,6,8}};// Declare of array.
    int i,j,max;// Declare of variable.
    printf("Matrix:\n");//Display the matrix.
    for(i=0;i<2;i++){// controls the rows.
        for(j=0;j<3;j++){// controls the columns and take each element.
            printf("%d", a[i][j]);       
        }
        printf("\n");// Move to the next line.
    }
    max = a[0][0];// intialize first value as max.
    for(i=0;i<2;i++){//takes the row.
        for(j=0;j<3;j++){// takes the element of each roww.
            if(a[i][j]>max){// compares the value of each element.
                max = a[i][j];// updates the value if it is greater.
            }
         
        }
    }
    printf("Largets number = %d", max);// prints the largest number.
    return 0;// End of the program.
}