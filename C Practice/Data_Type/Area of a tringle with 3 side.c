#include<stdio.h>
int main ()
{
    float a,b,c,s,area;
    printf("enter 3 side :");
    scanf("%f %f %f",&a,&b,&c);
    s= (a*b*c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %.2f",area);
}
