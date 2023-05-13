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
    int input;
    printf("Input a positive number : ");
    scanf("%d", &input);

    if (isPrime(input))
    {
        printf("The number %d is a prime number.", input);
    }
    else
    {
        printf("The number %d is not a prime number.", input);
    }
    return 0;
}