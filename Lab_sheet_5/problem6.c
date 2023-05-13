#include <stdio.h>
float findCube(int number)
{
    float cube = number * number * number;
    return cube;
}

int main()
{
    int input;
    printf("Input any number for cube : ");
    scanf("%d", &input);
    float cubeOfInput = findCube(input);
    printf("The cube of %d is : %.2f", input, cubeOfInput);
}