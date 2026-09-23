#include <stdio.h>
int main(){
	float a,b;// Declares the variable a,b using float datatype.
	char op;// creates a char variable to store the the operator.
	printf("Enter the numbers:\n");// Takes the input from the user.
	scanf("%f %f",&a,&b);// Takes the input and stores to the a and b variable.

	printf("Enter the operator,'+','-','/','*'\n");// Display the operators.
	scanf(" %c",&op);//Takes the operator as input and space tells scanf to ignore the enter key/blank space then read the operator.
	switch(op){
		case '+':printf("Adition=%.2f",a+b);break;// Performs the addition.
		case '-':printf("Subtraction=%.2f",a-b);break;// Performs the subtraction.
		case '*':printf("Multiplication=%.2f",a*b);break;// Performs the multiplication.
		case '/':printf("Divide=%.2f",a/b);break;//Performs the division.
		default:printf("Invalid ");break;//Invalid case.
	}
	return 0;// End of the program.
}