//W.A.P to find the sum of n natural numbers using do while loop.

#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    do {
        sum += i; // Add the current value of i to sum
        i++; // Increment i
    } while (i <= n); // Continue until i is less than or equal to n
    
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}