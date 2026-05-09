#include <stdio.h>

// Function Prototype: This tells the compiler "Expect these tools later"
int get_user_input(char* prompt);
int addition(int num1, int num2);

int main() {
    int first_number, second_number, total_sum;

    // We call the "Sensor" function twice to get values
    first_number = get_user_input("Enter first value: ");
    second_number = get_user_input("Enter second value: ");

    // We call the "Processor" function to do the math
    total_sum = addition(first_number, second_number);

    printf("\n %d + %d = %d\n", first_number, second_number, total_sum);

    return 0;
}

// The "Sensor" Tool: Handles logic for getting data
int get_user_input(char* prompt) {
    int value;
    printf("%s", prompt);
    scanf("%d", &value);
    return value;
}

// The "Processor" Tool: Pure logic, no input/output interference
int addition(int num1, int num2) {
    return num1 + num2;
}