#include <stdio.h>// Header file for input output function.
int main(){// Execution of the program starts.
    int a[3][3]={{1,2,3},{4,6,7},{3,4,5}};// Declare 2d array of 3 rows and 3 columns
    int i,j,main_sum=0,sec_sum=0;// declare loop counters and initalize main and sec sum to zero.
    for(i=0;i<3;i++){// outer loop is used to control rows.
        for(j=0;j<3;j++){// inner loop is used to control columns.
            if(i==j){// if outer is equal to inner loop.
                main_sum= main_sum + a[i][j];// adds the sum of main diagnol.
            }
            if(i+j==2){// if i+j is equalt ot 2 suppose 0+2=2 .
                sec_sum = sec_sum + a[i][j];// adds the sum of secondary diagnol.
            }
        }
        printf("\n");// Moves to the next line.
    }
    printf("Main-sum= %d",main_sum);// prints the sum of main diagnol.
    printf("Sec-sum= %d",sec_sum);// prints the sum of secondary diagnol.
    return 0;// end of the program.
}