#include <stdio.h>
int main(){
    int i,j,a[3][3]={{1,2,3},{3,4,5},{5,6,7}};
    int sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           sum = sum +a[i][j];
        }
    }
    printf("Sum=%d",sum);
    return 0;
}