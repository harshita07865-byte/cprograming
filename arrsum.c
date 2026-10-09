#include <stdio.h>// Header file for input output.
int main(){      // execution of the program starts.
    int i,j,a[3][3];//  dec loop counter and array.
    int sum=0;// dec sum varaiable.
    printf("Enter the elements:");// Ask the user toenter the numbers
    for(i=0;i<3;i++){// Takes the rows input.
        for(j=0;j<3;j++){// Takes the columns input.
            scanf("%d", &a[i][j]);// Stores to the array.
        }
    }
    for(i=0;i<3;i++){// Controls the rows.
        for(j=0;j<3;j++){// Controls the columns.
           sum = sum +a[i][j];// sum of an array.
        }
    }
    printf("Sum=%d",sum);
    return 0;// end of the program.
}