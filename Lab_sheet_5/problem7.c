#include <stdio.h>
#define PI 3.142

float findDiameter(float r)
{
    float diameter = 2 * r;
    return diameter;
}

float findCircumference(float r)
{
    float circumference = 2 * PI * r;
    return circumference;
}

float findArea(float r)
{
    float area = PI * r * r;
    return area;
}

int main()
{
    float radius;
    printf("Input radius : ");
    scanf("%f", &radius);
    float diameter = findDiameter(radius);
    float circumference = findCircumference(radius);
    float area = findDiameter(radius);
    printf("Diameter: %.2f\n Circumference: %.2f\n Area: %.2f", diameter, circumference, area);
}