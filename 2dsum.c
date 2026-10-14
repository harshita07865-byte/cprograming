#include <stdio.h>//Header file for input output.
int main(){// execution of the program.
	int a[2][3]={{1,2,3},{2,3,4}};//declare 2 matrix.
	int b[2][3]={{1,2,8},{3,4,9}};
	int sum[2][3],i,j;//dec sum to store and i for row and j for column.
	for(i=0;i<2;i++){//visit row.
		for(j=0;j<3;j++){// visit columns
			sum[i][j]=a[i][j]+b[i][j];//add elements.
		}
	}
	for(i=0;i<2;i++){// print each row
		for(j=0;j<3;j++){// print each column.
			printf(" %d",sum[i][j]);// print the sum element.
		}
		printf("\n");// move to the next line.
	}
	return 0;// End of the program.
}