#include <stdio.h>// Header file for input output.
int main(){      // execution of the program starts
    int a[2][3]={{1,2,3},{2,5,7}};// Declare the array.
    int i,j,even_count,odd_count;// Dec the array.
    printf("Matrix:");
    for(i=0;i<2;i++){// loop for row.
        for(j=0;j<3;j++){// loop for columns.
            printf("%d", a[i][j]);// prints the matrix.
        }
        printf("\n");// Move to the next line.
    }
    even_count = 0;// intialize count 0 for even.
    odd_count = 0;// intialize count 0 for odd.
    for(i=0;i<2;i++){// loop controls the row.
        for(j=0;j<3;j++){// takes each element of the row.
            if(a[i][j]%2==0){// comparison for even number.
                even_count++;// increases count by 1.
            }
            else{
                odd_count++;// increases count by 1.
            }
        }
    }
    printf("Even number=%d\n",even_count);// prints even number.
    printf("Count for odd number=%d",odd_count);// prints odd number.
    return 0;// End of the program.
}