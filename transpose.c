#include <stdio.h>//header file for input output function.
int main(){// Execution of the program starts.
	int a[4][3]={{1,2,3},{2,3,4},{3,6,7},{5,3,2}};//Declare array of 4 rows and 3columns.
	int i,j;// declare counter loops using int datatype.
	for(i=0;i<3;i++){// outer loop is used to control rows.
		for(j=0;j<4;j++){// inner loop is used to control columns.
			printf(" %d",a[j][i]);//transpose the matrix.
		}
		printf("\n");// moves to the next line.
	}
	return 0;// End of the program.
}