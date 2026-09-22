#include <stdio.h>
    int main(){
        int choice;// Declare a variable
        printf("1.Pizza");
        printf("2.Burger");
        printf("3.Coffee");
        printf("4.Pasta");
        printf("Enter choice:");//Takes choice from user.
        scanf("%d",&choice);//Takes input and and store in choice variable.
        switch(choice){
            case 1:printf("You have selected pizza.");//If choice is 1 display 
            printf("Price-120");break;//  price of pizza
            case 2:printf("You have selected Burger.");//If choice is 2 display
            printf("Price-80");break;// price of burger
            case 3:printf("You have selected Coffee.");//If choice is 3 display
            printf("Price-90");break;// price of coffee
            case 4:printf("You have selected Pasta.");//If choice is 4 display
            printf("Price-180");break;// price of Pasta
            default:("Invalid choice");break;//For invalid choice.
        }
        return 0;//End of the program.
    }
