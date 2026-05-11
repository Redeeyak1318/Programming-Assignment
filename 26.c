// W.A.P to input basic salary of an employee and calculate gross salary according to given conditions.
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
// Basic Salary >= 20001 : HRA = 30%, DA = 95%

#include <stdio.h>

int main()
{
    float basicSalary, hra, da, grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000)
    {
        hra = basicSalary * 0.20;
        da = basicSalary * 0.80;
    }
    else if (basicSalary <= 20000)
    {
        hra = basicSalary * 0.25;
        da = basicSalary * 0.90;
    }
    else
    {
        hra = basicSalary * 0.30;
        da = basicSalary * 0.95;
    }

    grossSalary = basicSalary + hra + da;

    printf("Gross salary: %.2f", grossSalary);

    return 0;
}