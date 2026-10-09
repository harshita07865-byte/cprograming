#include <stdio.h>
int main(){
    int a[4][3],i,j,sum;
    printf("Enter the matrix:");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            scanf("%d" &a[i][j]);
        }
    }
    for(i=0;i<4;i++){
        sum=0;
        for(j=0;j<3;j++){
        sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("Sum of each row is%d=%d",i+1,sum);
    return 0;
}