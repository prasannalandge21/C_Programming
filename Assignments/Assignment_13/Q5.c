#include <stdio.h>

int sum_even_numbers(int limit)
{
    // This calculates the sum of all even numbers up to 'limit'
    // Sum = 2 + 4 + 6 + ... + 2k = 2 * (1 + 2 + 3 + ... + k)
    // where 2k is the largest even number <= limit
    int n = limit / 2;
    return n * (n + 1);
}

int main(void)
{
    int limit;
    printf("Enter number: ");
    scanf("%d", &limit);
    printf("%d\n", sum_even_numbers(limit));
    
    return 0;
}