//W.A.P to find the location of a given number in an array.

#include<stdio.h>
int main()
{
    int i, n, a[100], num, flag=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are: [ ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");

    printf("Enter the number to find: ");
    scanf("%d", &num);
    for(i=0; i<n; i++)
    {
        if(a[i] == num)
        {
            flag = 1;
            printf("Number found at index: %d", i+1);
            break;
        }
    }
    if(flag == 0)
    {
        printf("Number not found in the array.");
    }
    return 0;
}