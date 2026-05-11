// W.A.P to find the factorial of a number using do-while loop.

#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        fact *= n;
        n--;
    } while (n > 0);
    printf("Factorial: %d", fact);
    return 0;
}