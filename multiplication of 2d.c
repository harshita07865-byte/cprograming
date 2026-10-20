#include <stdio.h>// Header file for input output function.
int main(){// Execution of the program starts.
	int a[2][3]={{1,2,3},{3,4,5}};// Declare 2d array of 2 rows and 3 columns.
	int b[3][3]={{1,2,3},{3,4,5},{4,6,8}};// Declare 2d array of 3 rows and 3 columns.
	int i,j,sum[2][3],k;// declare loop counter and sum array using int datatype.
	for(i=0;i<2;i++){// outer loop controls rows.
		for(j=0;j<3;j++){// inner loop controls columns.
			sum[i][j]=0;// intialize sum array to zero that resets after  inner loop condition finishes. 
			for(k=0;k<3;k++){// k is the loop to multiply the a and b array elements.
				sum[i][j]=sum[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<2;i++){// controls rows.
		for(j=0;j<3;j++){// controls columns.
			printf(" %d",sum[i][j]);//prints the sum into the exact position using loop counters.
		}
		printf("\n");// moves to the next line after the condition of the inner loop finishes.
	}
	return 0;// end of the program.
}