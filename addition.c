#include<stdio.h>
int main()
{
    // Addition of two numbers after getting the vaules from user

int first_number, second_number,total_sum;
printf("Enter first value:");
scanf("%d",&first_number);
printf("\nEnter second value:");
scanf("%d",&second_number);
total_sum = first_number + second_number;
printf("\n %d + %d = %d", first_number,second_number,total_sum);
return 0;
}