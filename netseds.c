#include <stdio.h> // Include standard input-output library for printf
// Define a structure named 'address' to hold location details
struct address {
char city[20];   // Character array to store the city name up to 19 characters
int pin;         // Integer member to store the PIN/Postal code
};
// Define a structure named 'student' that contains a nested structure
struct student {
int roll;        // Integer member to store the student's roll number
char name[20];   // Character array to store the student's name
float marks;     // Floating-point member to store the student's marks
struct address add; // Nested structure member of type 'struct address'
};
int main() {
// Declare and initialize nested structure variable 's' with static records
struct student s = { 12, "Rahul", 34.56, {"Sangrur", 123456} };
// Print values belonging directly to the student structure outer layer
printf("Roll no:%d\n", s.roll);    // Access and print outer member 'roll'
printf("Name:%s\n", s.name);       // Access and print outer member 'name'
printf("Marks=%.2f\n", s.marks);   // Access and print outer member 'marks' to 2 decimal points
// Print values belonging to the inner nested address structure layer
printf("City = %s\n", s.add.city); // Use dot operator twice to access inner nested member 'city'
printf("Pin =%d\n", s.add.pin);   // Use dot operator twice to access inner nested member 'pin'
return 0; // Return 0 to indicate successful program completion
}