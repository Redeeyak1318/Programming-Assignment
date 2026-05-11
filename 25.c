//W.A.P to enter month number between(1-12) and print number of days in month using if else.

#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Number of days in month %d is 31.", month);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Number of days in month %d is 30.", month);
    }
    else if (month == 2)
    {
        printf("Number of days in month %d is 28 or 29.", month);
    }
    else
    {
        printf("Invalid month number.");
    }
    return 0;
}