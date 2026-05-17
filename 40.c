//W.A.P to delete an element from an array at a given position.

#include <stdio.h>
int main()
{
    int a[100], n, pos, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter the position of the element to be deleted: ");
    scanf("%d", &pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    printf("The array after deletion is: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}