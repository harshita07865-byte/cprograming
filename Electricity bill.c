#include<stdio.h>
int main(){
	int units;
	float bill;
	printf("Enter the units consumed:");// Ask the user to enter the units consumed.
	scanf("%d",&units);
	if(units<=100){// Calculate bill upto 100 units.
		bill = units*2;}
		
	else if(units<=200){// Calculate bill upto 200 units.
	bill = units*3;}
	else if(units<=300){// Calculate bill upto 300 units.
	bill = units*4;}
	else{//Calculate bill for upto more then 300 units.
	bill = units*7;}
	printf("Total Rs=%.2f",bill); //Calculate the total bill.
	return 0;
    }

