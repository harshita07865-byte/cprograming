#include <stdio.h>//Header file for input output function.
int main(){// execution of the program starts.
	int a[2][3]={{1,2,3},{4,5,6}};// declare array of 2 rows amd 3 columns.
	int i,j,sum=0;// declare counter loops and sum varaiable using int datatype.
	for(i=0;i<2;i++){// loop for main diagnol elements.
      sum = sum + a[i][i];// add the diagnol elements to sum.
	}
printf("Sum = %d",sum);// prints the sum.
return 0;// End of the program.
}