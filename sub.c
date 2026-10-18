#include <stdio.h>// header file for input output function.
int main(){// execution of the program starts.
    int a[2][3]={{1,2,5},{5,6,7}};//first 2d array.
    int b[2][3]={{2,3,6},{5,6,8}};// second 2d array.
    int i,j,sub[2][3];// declare i , j amd sub variables.
    for(i=0;i<2;i++){// outer loop for rows.
        for(j=0;j<3;j++){// inner loop for columns.
            sub[i][j]= a[i][j] - b[i][j];// sub the 2 arrays.
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d",sub[i][j]);// prints the array after subtraction.
        }
        printf("\n");// Movest to the next line.
    }
    return 0;// End of the program.
}