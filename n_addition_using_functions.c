#include <stdio.h>

// Prototypes: The "Blueprint" of our tools
int get_user_count();
int calculate_sum(int count);

int main() {
    // Mission Control: Calling specialized modules
    int total_to_add = get_user_count();
    int final_result = calculate_sum(total_to_add);

    printf("\nSum of the %d numbers is: %d\n", total_to_add, final_result);

    return 0;
}

// Module 1: Input handling
int get_user_count() {
    int count;
    printf("Enter how many numbers to be added: ");
    scanf("%d", &count);
    return count;
}

// Module 2: Pure mathematical processing
int calculate_sum(int count) 
{
    int i, current_number, total_sum = 0;

    for(i = 1; i <= count; i++)
     {
        printf("Enter number %d: ", i);
        scanf("%d", &current_number);
        total_sum = total_sum - current_number;
    }
    return total_sum;
}