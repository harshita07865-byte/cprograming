#include <stdio.h>// header file for input output function.
int main(){// execution of the program starts.
	int a[2][3]={{1,2,3},{1,5,6}};//declare 2d array with 2 rows and 3 columns.
	int i,j,even=0,odd=0;// declare i and j variables and initilize even and odd count to zero.
	for(i=0;i<2;i++){// outer loop to control rows.
		for(j=0;j<3;j++){// inner loop to control columns.
			if(a[i][j]%2==0){// if condition to verify even count.
				even++;// increase the value for even count.
			}
			else{// else for odd count.
				odd++;// increase value for odd count.
			}
		}
	}
	printf("Even count =%d\n",even);// prints even count.
	printf("Odd count =%d\n",odd);// prints odd count.
	return 0;// end of the program.
}