#include <stdio.h>
int main(){
    int pin,amount,choice;// Declare the variable using int keyword.
    float balance=5000;//Declare the variable using float keyword.
    printf("--ATM menu--");
    printf("1.Withdrawl amount");
    printf("2. Deposit amount.");
    printf("Enter the pin:\n");//Takes the pin from the user.
    scanf("%d",&pin);//Takes the input that user has enetered and  stores to pin varaible.
    printf("Enter choice:");//Takes the choice from the user.
    scanf("%d",&choice);//takes input and stores to the choice variable.
    if(pin==1456){//if statement starts   
        if(choice==1){//if condition starts here.
        printf("Enter withdrawl amount:");//Takes withdrawl amount from user.
        scanf("%d",&amount);//Takes input and stores it to amount variable
        if(amount<=balance){// Checks the condition and moves further then.
            balance = balance-amount;// Deduct balance.
            printf("Your withdrawl amount is successful\n");
            printf("Remaining balance=%f",balance);// New balance in account.
        }
        else{
            printf("Insufficient amount");// invalid amount.
        }
    }
    if(choice==2){
    if (balance>0)
 { // if condition starts from here
        printf("Enter deposit amount:");// Takes the amount from the user.
        scanf("%d",&amount);//Takes input and stores to the amount variable.
        balance = balance + amount;// deposit amount.
        printf("Your deposit amount successful.\n");
        printf("New balance=%f",balance);// New balance after depositing.     
}
    }
    else{
        printf("Invalid pin");// Invalid pin
    }
}   
 return 0;// End of the program.
}