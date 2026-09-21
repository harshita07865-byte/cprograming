#include <stdio.h>
int main(){
    int amount,choice;
    float balance=5000;
    printf("--ATM MENU--");
    printf("1.Check balance.");
    printf("2.Withdraw amount.");
    printf("3.Deposit amount.");
    switch(choice){
        case 1:printf("Check balance:",balance);break;
        case 2:printf("Enter withdraw amount.\n");
        scanf("%d",&amount);
        if(amount<=balance){
            balance = balance - amount;
            printf("Withdrawl amount is successful.\n");
            printf("New balance=%f",balance);
        }else{
            printf("Insufficient amount.");
        }
        break;
        case 3:printf("Enter deposit amount.");
        scanf("%d",&amount);
        balance = balance + amount;
        printf("New balance =",balance);break;
        default:printf("Invalid amount");break;
        return 0;
    }
}