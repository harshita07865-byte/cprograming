#include <stdio.h>
int main(){// Execution the prgram starts here.
	int month;// declare variable.
	printf("Enter the numbers from 1-12\n");// Takes the number from the user.
	scanf("%d",&month);//Takes the input and stores it to the variable.
	switch(month){// switch case starts from here.
		case 1:printf("january\n");break;//Displays January.
		case 2:printf("February\n");break;//Displays February.
		case 3:printf("March\n");break;//Displays March.
		case 4:printf("April\n");break;//Displays April.
		case 5:printf("May\n");break;//Displays May.
		case 6:printf("June\n");break;//Displays June.
		case 7:printf("July\n");break;//Displays July.
		case 8:printf("August\n");break;//Displays August.
		case 9:printf("September\n");break;//Displays September.
		case 10:printf("October\n");break;//Displays October.
		case 11:printf("November\n");break;//Displays November.
		case 12:printf("December\n");break;//Displays December.
		default:printf("Invalid");break;//Displays Invalid choice
    }
		return 0;// End of the program.
}