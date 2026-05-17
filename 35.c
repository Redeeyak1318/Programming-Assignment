//W.A.P to print the following pattern:
//        5
//      4 5
//    3 4 5
//  2 3 4 5
//1 2 3 4 5

#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (j = n - i + 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}