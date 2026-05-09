#include <stdio.h>

int main() {
    int n, i, current_number;
    int total_sum = 0;

    printf("How many numbers do you want to add? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &current_number);
        total_sum = total_sum + current_number;
    }

    printf("\nSum of the %d numbers is: %d\n", n, total_sum);

    return 0;
}