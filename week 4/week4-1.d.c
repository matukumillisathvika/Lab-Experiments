#include <stdio.h>
int main()
{
    float i,j;
    printf("Enter i:");
    scanf("%f",&i);
    j=(i++)+(++i);
    printf("j=%f",j);
}