//W.A.P to find the largest number in an array.

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i, largest = arr[0];
    printf("The elements of the array are: [ ");
    for(i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    for (i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("The largest number in the array is: %d", largest);
    return 0;
}