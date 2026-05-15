//W.A.P to update an element in an array at a given position.

#include <stdio.h>
int main()
{
    int a[100], n, pos, value;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");
    printf("Enter the position of the element to update: ");
    scanf("%d", &pos);
    pos--;
    printf("Enter the new value: ");
    scanf("%d", &value);
    a[pos] = value;
    printf("The array after updating is: [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");
    return 0;
}