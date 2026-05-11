//Write a program using for loop to print the natural numbers upto n.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Natural numbers up to %d are: ", n);
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    
    return 0;
}