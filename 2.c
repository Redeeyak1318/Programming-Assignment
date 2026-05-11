//Write a program to find the perimeter of a triangle.

#include <stdio.h>
int main()
{
    float a, b, c, perimeter;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    perimeter = a + b + c;
    printf("The perimeter of the triangle is: %.2f\n", perimeter);
    return 0;
}
