#include <stdio.h>
int main(){
    int a,b,x,y,digit,hcf,lcm;// Declare the variables using int datatype.
    printf("Enter the two numbers:");// Ask the user to enter the number.
    scanf("%d %d",&a,&b);// Takes the input and stores the value to a and b variable.
    x = a; // Putting values of a and b to x and y
    y = b;// because for lcm original values of a and b are required.
    while(y !=0){// y shouldnot be equal to zero.
      digit = x%y;// Gives the remainder
      x =  y;// x replaces the value of y.
      y = digit;// y replaces the value of digit.
    }
    hcf = x;
    lcm = (a+b)/hcf;
    printf("LCM=%d",lcm);
    return 0;
}