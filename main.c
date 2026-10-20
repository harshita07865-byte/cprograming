#include <stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,6,7},{3,4,5}};
    int i,j,main_sum=0,sec_sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                main_sum= main_sum + a[i][j];
            }
            if(i+j==2){
                sec_sum = sec_sum + a[i][j];
            }
        }
        printf("\n");
    }
    printf("Main-sum= %d",main_sum);
    printf("Sec-sum= %d",sec_sum);
    return 0;
}