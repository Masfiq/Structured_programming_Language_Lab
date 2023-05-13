#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int number)
{
    int sum = 0;
    for (int num = 1; num < number; num++)
    {
        if (number % num == 0)
        {
            sum = sum + num;
        }
    }

    if (sum == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int lowerLimit, upperLimit;
    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d", &lowerLimit);
    printf("Input highest search limit of perfect numbers : ");
    scanf("%d", &upperLimit);

    printf("The perfect numbers between %d to %d are : ", lowerLimit, upperLimit);
    for (int number = lowerLimit; number <= upperLimit; number++)
    {

        if (isPerfectNumber(number))
        {
            printf("%d\t", number);
        }
    }

    return 0;
}
