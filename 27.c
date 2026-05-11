//W.A.P to print the following pattern
//1 2 3
//4 5 6
//7 8 9

#include <stdio.h>
int main()
{
    int i, j, count = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}