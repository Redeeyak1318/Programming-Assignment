//W.A.P to insert an element in an array at a given position.

#include <stdio.h>
int main()
{
    int a[100], n, pos, num, i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    size=n;
    printf("Enter the elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are: [ ");
    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    pos--;
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    for(i=size; i>=pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = num;
    size++;
    printf("The array after insertion is: [ ");
    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");
    return 0;
}