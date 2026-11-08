
#include <stdio.h> // Include standard input-output library for printf
// Define a structure named 'employee' to group related employee attributes
struct employee
{
int id;            // Integer member to store the employee's unique ID
char name[20];     // Character array (string) to store the employee's name up to 19 characters
float salary;      // Floating-point member to store the employee's salary
};
int main() {
// Declare and initialize a structure variable 'e' with compile-time default values
struct employee e = {101, "Rahul", 25000};
// Display the initialized employee record details
printf("ID=%d\n", e.id);         // Access and print the 'id' member value
printf("Name = %s\n", e.name);   // Access and print the 'name' string member value
printf("Salary=%.2f", e.salary); // Access and print the 'salary' member rounded to 2 decimal places
return 0; // Return 0 to indicate successful program execution
}