#include <stdio.h>

int findFactorial(int number)
{
    int factorialOfNumber = 1;
    for (int i = 1; i <= number; i++)
    {
        factorialOfNumber = factorialOfNumber * i;
    }
    return factorialOfNumber;
}

int main()
{
    int n = 5;
    int sum = 0;

    for (int number = 1; number <= n; number++)
    {
        sum = sum + findFactorial(number) / number;
    }

    printf("The sum of the series is : %d", sum);
    return 0;
}