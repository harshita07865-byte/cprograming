#include <stdio.h>//Used for printf() scanf()
#include <math.h>//Used for sqrt
int main()//Main function where program starts.
{
	float a,b,c,d,r1,r2;// Declare variables
	printf("Enter the number:");//Ask the user to enter value of a,b,c
	scanf("%f %f %f",&a,&b,&c);
	d = b*b-4*a*c;// Calculate the discriminant
	r1 =(-b+sqrt(d))/(2*a);//Calculate the first root using quadratic formula
	r2= (-b-sqrt(d))/(2*a);//Calculate the second root using quadratic formula
	printf("Roots= %.2f %.2f",r1,r2);//calculate total roots
	return 0;//Ends of the program finally.
}
