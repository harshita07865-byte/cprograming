#include <stdio.h>
int main(){
    int pin,amount;// Declare the variable using int keyword.
    float balance=5000;//Declare the variable using float keyword.
    printf("Enter the pin:");//Takes the pin from the user.
    scanf("%d",&pin);//Takes the input that user has enetered and and stores to pin varaible.
    if(pin==1456){//if statement starts
        printf("Enter withdrawl amount:");//Takes withdrawl amount from user.
        scanf("%d",&amount);//Takes input and stores it to amount variable
        if(amount<=balance){// Checks the condition and moves further then.
            balance = balance-amount;// Deduct balance.
            printf("Your withdrawl amount is successful");
            printf("Remaining balance=%f",balance);// New balance in account.
        }
        else{
            printf("Insufficient amount");// Condition is not matched.
        }
    }
    else if(pin==1456){// condition starts from here
        printf("Enter deposit amount:");// Takes the amount from the user.
        scanf("%d",&amount);//Takes input and stores to the amount variable.
        balance = balance + amount;
        printf("Your deposit amount successful");
        printf("New balance=%f",balance);// New balance after depositing.
    }
    return 0;// End of the program.
}