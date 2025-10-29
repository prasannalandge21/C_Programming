#include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_five(int number)
{
    return (number % 5 == 0);
}

int main(void)
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");
    return 0;
}