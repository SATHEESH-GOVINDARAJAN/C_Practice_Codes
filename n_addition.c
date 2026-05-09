#include <stdio.h>

int main() {
    int user_count, i, current_number;
    int total_sum = 0;

    printf("Enter how many numbers to be added: ");
    scanf("%d", &user_count);

    for(i = 1; i <= user_count; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &current_number);
        total_sum = total_sum + current_number;
    }

    printf("\nSum of the %d numbers is: %d\n", user_count, total_sum);

    return 0;
}