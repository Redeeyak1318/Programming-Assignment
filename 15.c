//W.A.P to validate if the user input number is positive or negative using do while loop.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    do {
        if (n > 0) {
            printf("The number is positive.\n");
        } else if (n < 0) {
            printf("The number is negative.\n");
        } else {
            printf("The number is zero.\n");
        }
        printf("Enter another integer (0 to exit): ");
        scanf("%d", &n);
    } while (n != 0);

    return 0;
}