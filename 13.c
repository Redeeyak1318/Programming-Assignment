//W.A.P to create a menu driver program to calculate the area of a circle, rectangle and triangle using switch case statement.

#include <stdio.h>
int main()
{
    int c;
    float r, l, b, base, height, area;

    printf("Menu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &r);
            area = 3.14 * r * r;
            printf("Area of the circle: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &l, &b);
            area = l * b;
            printf("Area of the rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}