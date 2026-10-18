#include <stdio.h>// header file input output function.
int main(){// main is the function from where execution of the program starts.
    int a[2][3]={{1,2,3},{3,4,5}};// 2d array with 2 rows and 3 columns.
    int i,j;// declare i and j variables using int datatype;
    for(i=0;i<2;i++){// Control rows.
        for(j=0;j<3;j++){// control columns.
            printf(" %d",a[i][j]);// print matrix.
        }
        printf("\n");// after the inner loop finishes the loop moves to the next line.
    }
return 0;// End of the program.
}