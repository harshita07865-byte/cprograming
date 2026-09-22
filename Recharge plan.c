#include <stdio.h>
int main(){
    int choice , confirm;// Declared variable
    printf("--Mobile plan--");// Menu displayed.
    printf("1. 199 plan\n");
    printf("2. 299 plan\n");
    printf("3. 399 plan\n");
    printf("Enter the choice:");// Takes choice from the user.
    scanf("%d",&choice);// Takes input and stores to the variable.
    switch (choice)// switch starts.
    {
    case 1:printf("You have selected 199 plan\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter confirmation:");// Takes confirmation from the user.
    scanf("%d",&confirm);// Takes input and store to the variable.
    if(confirm==1){
        printf("Your recharge plan for 199 is successful");
    }   else{
        printf("You cancelled the plan.");
    }    
        break; 
    case 2:printf("You have selected 299 plan.\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter confirmation:");// Takes confirmation from the user.
    scanf("%d",&confirm);// Takes input and store to the variable.
    if(confirm==1){
        printf("Your recharge plan for 299 is successful");
    }   
    else{
        printf("You cancelled the plan.");
    }   break;
 case 3: printf("You have selected 399 plan");
 printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter confirmation:");// Takes confirmation from the user.
    scanf("%d",&confirm);// Takes input and store to the variable.
    if(confirm==1){
        printf("Your recharge plan for 399 is successful");
    
    }    else{
        printf("You cancelled the plan.");
    }   break;
    default: printf("Invalid choice");
    
    } // Ends of the program.
    return 0;
}