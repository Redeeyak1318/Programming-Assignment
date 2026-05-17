//Write a program to caluculate SI and CI.
#include <math.h>
#include <stdio.h>


int main()
{
    float p,r,t,si,ci;
    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time in years: ");
    scanf("%f",&t);
    
    si=(p*r*t)/100;
    ci=p*(pow((1+(r/100)),t) - 1);
    
    printf("Simple Interest: %.2f\n",si);
    printf("Compound Interest: %.2f\n",ci);
    
    return 0;
}