#include<stdio.h>
int main ()
{
    float base,height,area;
    printf("base = ");
    scanf("%f",&base);
    printf("height= ");
    scanf("%f",&height);
    area = 0.5 * base * height;
    printf("Area = %.2f\n",area);
}
