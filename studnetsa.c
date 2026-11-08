
#include <stdio.h> // Include standard input-output library for printf and scanf
// Define a structure named 'student' to group related data for a single student
struct student
{
int roll;        // Integer member to store the student's roll number
char name[20];   // Character array (string) to store the student's name up to 19 characters
float marks;     // Floating-point member to store the student's marks
};
int main() {
struct student s[3]; // Declare an array of structures named 's' capable of storing records for 3 students
int i;               // Declare a loop counter variable
// Loop to collect information for 3 students
for(i = 0; i < 3; i++) {
printf("Enter student roll no, name and marks:\n"); // Prompt user for input
scanf("%d", &s[i].roll);     // Read and store roll number into the current student's roll member
scanf("%19s", s[i].name);    // Read and store name into the character array (removed unnecessary '&' for string array)
scanf("%f", &s[i].marks);    // Read and store marks into the current student's marks member
}
printf("Student details\n"); // Header print for the output section
// Loop to display the stored information of all 3 students
for(i = 0; i < 3; i++) {
printf("\nRoll no:%d\n", s[i].roll);   // Print the current student's roll number
printf("\nName:%s\n", s[i].name);       // Print the current student's name string
printf("\nMarks:%.2f\n", s[i].marks);   // Print the current student's marks formatted to 2 decimal places
}
return 0; // Return 0 to indicate successful program execution
}