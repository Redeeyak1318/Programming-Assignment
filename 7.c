//Write a program to check whether a number is prime or not.

#include<stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; ++i)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (num < 0 || num == 0 || num == 1)
        printf("Negative numbers, 0 and 1 are not prime numbers.");
    else
    {
        if (flag == 0)
            printf("%d is a prime number.", num);
        else
            printf("%d is not a prime number.", num);
    }

    return 0;
}