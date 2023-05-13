#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number)
{
    bool flag = true;
    for (int num = 2; num < number; num++)
    {
        if (number % num == 0)
        {
            flag = false;
        }
    }

    return flag;
}

int main()
{
    int lowerLimit, upperLimit;
    printf("Input lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Input upper limit: ");
    scanf("%d", &upperLimit);

    printf("Prime numbers between %d-%d are : ", lowerLimit, upperLimit);
    for (int number = lowerLimit; number <= upperLimit; number++)
    {

        if (isPrime(number))
        {
            printf("%d, ", number);
        }
    }

    return 0;
}