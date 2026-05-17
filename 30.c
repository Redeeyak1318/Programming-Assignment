//W.A.P to draw the following pattern
//* * * * *
//  * * * *
//    * * *
//      * *
//        *

#include <stdio.h>
int main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = 1; s < i; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}