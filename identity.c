#include <stdio.h>// header file for standard input output function.
int main(){// Execution of the program starts.
    int a[3][3]={{1,0,0},{0,1,0},{0,0,1}};// Declare 2d array of 3 rows and 3 columns.
    int i,j,identity=1;//declare counter loops and identity variable initialize it to 1.
    for(i=0;i<3;i++){// outer loop to control rows.
        for(j=0;j<3;j++){// inner loop to control columns.
            if(i==j && a[i][j]!= 1 ){
                identity = 0;
            }
            if(i!=j && a[i][j]!=0){
                identity =0;
            }
        }
    }
    if(identity == 1){// if condition for identity matrix.
        printf("Identity matrix");
    }
    if(identity == 0){
        printf("Not an identity matrix.");// if condition for not an identity matrix.
    }
    return 0;// end of the program.
}