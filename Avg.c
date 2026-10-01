#include <stdio.h>//Header file for input output 
int main(){// Execution of the program starts.
    int a[5],i,sum=0;//Declaration of the array,Loop counter,and sum
    float avg;//Declaration of the avg using float datatype.
    printf("Enter the numbers:");//Ask the user to enter the number.
    for(i=0;i<5;i++){// takes only 5 numbers.
    scanf("%d",&a[i]);//Takes input and stores to array.
    sum=sum + a[i];//Sum of the digits.
    }
    avg = sum/5.0;//avg of the digits.
    printf("Sum=%d\n",sum);// prints sum
    printf("Average=%f",avg);// prints avg
    return 0;// End of the program.
    
}