#include<stdio.h>
int main()
{
    int a,b,c,d,max,min;
    printf("Enter four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>=b&&a>=c&&a>=d)
        max=a;
    else if(b>=c&&b>=d)
        max=b;
    else if(c>=d)
        max=c;
    else
        max=d;
    if(a<=b&&a<=c&&a<=d)
        min=a;
    else if(b<=c&&b<=d)
        min=b;
    else if(c<=d)
        min=c;
    else
        min=d;
    printf("Maximum=%d\n",max);
    printf("Minimum=%d\n",min);
}