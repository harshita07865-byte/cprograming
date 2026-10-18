#include <stdio.h>// header file for input output.
int main(){// execution of the program starts.
    int a[2][3] ={{1,2,3},{5,6,7}};// 2d array with 2 rows and 3 columns.
    int i , j, sum;// declare i,j,sum variable using int datatype.
    for(i=0;i<2;i++){// controls the row loop.
        sum =0;// initialize sum to 0 inside outer loop so after every inner loop finishes the sum then again resets to zero for next iteration.
        for(j=0;j<3;j++){// controls columns.
        sum = sum +a[i][j];// sum for each row.
        }
        printf("Sum of each row (%d) is =%d",sum);// prints the sum of each row .
    }
     return 0;// end of the program.
}