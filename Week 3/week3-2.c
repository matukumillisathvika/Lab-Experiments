#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t,ci,a;
    printf("Enter principal amount:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter time period in years:");
    scanf("%f",&t);
    a=p*pow(1+r/100,t);
    ci=a-p;
    printf("Compound interest=%f",ci);
}