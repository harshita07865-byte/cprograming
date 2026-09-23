#include <stdio.h>
int main(){
    int choice,units;// Declare the variables using int datatype.
    float bill;// Declare the variables using float datatype.
    printf("1.Commercial use Rs-5\n");
    printf("2.Industrial use Rs-10\n");
    printf("3.Domestic use Rs-15\n");
    printf("Enter choice:");// Takes choice from the user.
    scanf("%d",&choice);// Takes input and stores the value to the variable.
    switch(choice){// Switch case starts here.
        case 1:bill = units*5;printf("Units consumed for commercial purpose is=%f",bill);break;// for commercial use.
        case 2:bill = units*10;printf("Units consumed for Industrial purpose is=%f",bill);break;// for industrial use.
        case 3:bill = units*15;printf("Units consumed for Domestic purpose is=%f",bill);break;// domestic purpose.
        default:printf("Ivalid choice");break;// invalid choice.
        return 0;// End of the program,
    }
}