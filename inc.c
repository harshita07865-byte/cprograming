#include <stdio.h>
int main(){
    int a=5;//Declare the integer variable and initialize it to 5.
    printf("%d\n",++a);// pre - increment: first increases a value by 1, then print it.
    printf("%d\n",a++);//post-increment: first print a then increases it by 1.
    printf("%d\n",a);//print final value of a.
    return 0;// End of the program.
}