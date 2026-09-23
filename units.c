#include <stdio.h>
int main(){
    int choice,units;
    float bill;
    printf("1.Commercial use Rs-5\n");
    printf("2.Industrial use Rs-10\n");
    printf("3.Domestic use Rs-15\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:bill = units*5;printf("Units consumed for commercial purpose is=%f",bill);break;
        case 2:bill = units*10;printf("Units consumed for Industrial purpose is=%f",bill);break;
        case 3:bill = units*15;printf("Units consumed for Domestic purpose is=%f",bill);break;
        default:printf("Ivalid choice");break;
        return 0;
    }
}