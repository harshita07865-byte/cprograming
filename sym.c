#include <stdio.h>// header file for input output function.
int main(){// Execution of the program starts.
    int a[3][3]={{1,2,3},{2,4,5},{3,5,6}};// Declare 2d matrix of 3 rows and 3 columns.
    int i,j,symmetric = 1;// Declare i,j and symmetric variable and intitalize it to 1.
     for(i=0;i<3;i++){// outer loop controls rows.
        for(j=0;j<3;j++){// inner loop controls columns.
            if(a[i][j]!=a[j][i]){//contidion if original matrix is not equal to transpose matrix.
                symmetric = 0;// initialize it to zero.
                break;// stops the loop after the condition becomes true.
            }
        }
     }
     if(symmetric==1){// if original matrix is equal to transpose matrix.
        printf("Symmetric matrix");// prints symmetric matrix.
     }
     else{
        printf("NOt a symmetric matrix");// prints not a symmetric matrix.
     }
     return 0;// Returns 0.
}