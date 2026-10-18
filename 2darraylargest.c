#include <stdio.h>// header file for input output function.
int main(){// execution of the program starts.
	int a[2][3]={{1,2,4},{5,8,9}};// 2d array for 2 rows and 3 columns.
	int i,j,largest=a[0][0];// declare i,j and initialize largest to 0 as we donot know largest value using int datatype.
	for(i=0;i<2;i++){// controls rows.
		for(j=0;j<3;j++){// controls columns.
			if(a[i][j]>largest){// if condition to find largest.
				largest = a[i][j];// stores largest value.
			}
		}
	}
	printf("Largest=%d",largest);// prints the largest value.
	return 0;// end of the program.
}