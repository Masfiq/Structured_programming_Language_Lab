#include <stdio.h>
#include <stdbool.h>
bool ifOdd(int number)
{
    if (number % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int input;
    printf("Input any number : ");
    scanf("%d", &input);
    if (ifOdd(input))
    {
        printf("The entered number is odd.");
    }
    else
    {
        printf("The entered number is even.");
    }
}
