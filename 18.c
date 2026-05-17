//W.A.P to print the multiplication table from 15 to 20 using do-while loop.

#include <stdio.h>
int main()
{
    int i = 15, j;
    do {
        j = 1;
        do {
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 20);
    return 0;
}