#include<stdio.h>
int main(){
    int a[5],i, even=0, odd=0;
    printf("Enter the numbers:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            even++;}
      else{
            odd++;
        }
        
   }
   printf("Even=%d",even);
   printf("Odd=%d",odd);
   return 0;
}