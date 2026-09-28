#include <stdio.h>
int main(){
    int n,i=1;// Declare the variables.
    printf("Enter a number:");// Ask the user to enter the number.
    scanf("%d",&n);// Stores the value to n variable.
    while(i<=10){// Repeates the loop until the i becomes greater then zero.
        printf("%d x %d=%d\n",n,i,n*i);//Multiplication 
        i++;// Increases the value by 1.
    }
    return 0;// End of the program.
}