#include <stdio.h>
int main()
{
    float A,B,C,D,E,F,G,result;
    printf("Enter A,B,C,D,E,F,G:");
    scanf("%f %f %f %f %f %f %f",&A,&B,&C,&D,&E,&F,&G);
    result=A+B*C+(D*E)+F*G;
    printf("Result=%f",result);
}