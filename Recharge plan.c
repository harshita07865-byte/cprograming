#include <stdio.h>
int main(){
    int choice , confirm;
    printf("--Mobile plan--");
    printf("1. 199 plan\n");
    printf("2. 299 plan\n");
    printf("3. 399 plan\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:printf("You have selected 199 plan\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter confirmation:");
    scanf("%d",&confirm);
    if(confirm==1){
        printf("Your recharge plan for 199 is successful");
    }   else{
        printf("You cancelled the plan.");
    }    
        break; 
    case 2:printf("You have selected 299 plan.\n");
    printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter confirmation:");
    scanf("%d",&confirm);
    if(confirm==1){
        printf("Your recharge plan for 299 is successful");
    }   
    else{
        printf("You cancelled the plan.");
    }   break;
 case 3: printf("You have selected 399 plan");
 printf("1.Yes\n");
    printf("2.No\n");
    printf("Enter confirmation:");
    scanf("%d",&confirm);
    if(confirm==1){
        printf("Your recharge plan for 399 is successful");
    
    }    else{
        printf("You cancelled the plan.");
    }   break;
    default: printf("Invalid choice");
    
    }
    return 0;
}