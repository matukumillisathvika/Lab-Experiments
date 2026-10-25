#include<stdio.h>
int main()
{ 
  int a,b,c,sum;
  float avg;
  printf("Enter the values of a,b,c:");
  scanf("%d%d%d",&a,&b,&c);
  sum=a+b+c;
  printf("\nsum of three number is %d", sum);
  avg=sum/3;
  printf("\nthe average of three number is %f",avg);
} 