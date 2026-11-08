#include <stdio.h> // Include standard input-output library for printf and scanf

// Define a structure named 'student' to group related student data
struct student {
    int roll;        // Integer member to store the student's roll number
    int name[50];    // Note: This is an integer array instead of a character array (char name[50])
    float marks;     // Floating-point member to store the student's marks
};

int main() {
    struct student s; // Declare a structure variable 's' of type 'struct student'

    // Prompt and read the student's roll number
    printf("Enter the roll no:");
    scanf("%d", &s.roll); // '%d' reads an integer and stores it in the roll member using its address

    // Prompt and read the student's name
    printf("Enter the name: ");
    scanf("%49s", s.name); // '%49s' reads a string up to 49 characters to prevent buffer overflow

    // Prompt and read the student's marks
    printf("Enter the marks: ");
    scanf("%f", &s.marks); // '%f' reads a float value and stores it in the marks member using its address

    // Display the stored student details
    printf("Student details:\n");
    printf("Roll no= %d\n", s.roll); // Prints the stored integer roll number
    printf("Name = %s\n", s.name);   // Prints the name as a string
    printf("Marks = %.2f", s.marks); // Prints the marks rounded to 2 decimal places

    return 0; // Return 0 to indicate successful program execution
}
