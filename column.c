#include <stdio.h>// header file for input output.
int main(){// Execution of the program starts.
    int a[2][3] = {{1,2,3},{6,7,8}};// declare 1d array of 2 rows and 3 columns.
    int i,j,sum;// declar int i,j,sum variables.
    for(j=0;j<3;j++){// controls the column loop
        sum =0;// intialize sum =0 when next iteration starts.
        for(i=0;i<2;i++){// controls rows.
            sum = sum +a[i][j];// sum for each column.
        }
        printf("sum for each column %d is:%d\n", j+1, sum);// prints the sum.
    }
    return 0;// end of the program.
}