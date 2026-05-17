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
            break;
        }
        else if (n < 0) {
            printf("The number is negative.\n");
            break;
        }
        else {
            printf("The number is zero.\n");
            break;
        }
    } while (n != 0);

    return 0;
}