#include <stdio.h>
float findSquare(int number)
{
    float square = number * number;
    return square;
}

int main()
{
    int input;
    printf("Input any number for square : ");
    scanf("%d", &input);
    float squareOfInput = findSquare(input);
    printf("The square of %d is : %.2f", input, squareOfInput);
}
