#include <stdio.h>// header file for input output function.
int main(){// execution of the program starts.
    int a[3][2]={{1,2},{4,5},{5,6}};// 2d array for 3rows and 2 columns.
    int i,j,smallest = a[0][0];// declare i,j and initialize largest to a[0][0] as we donot know smallest value using int datatype.
    for(i=0;i<3;i++){// outer loop to control rows.
        for(j=0;j<2;j++){// inner loop to control columns.
            if(a[i][j]<=smallest){ // if condition to find smallest value.
                smallest = a[i][j];// assign smallest value.
            }
        }
    }
    printf("Smallest=%d",smallest);// prints the smallest value.
    return 0;// end of the program.
}