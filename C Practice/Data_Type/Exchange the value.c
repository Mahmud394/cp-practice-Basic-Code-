//Exchange the value of two integer by using a third variable
//mahmud un nabi
#include<stdio.h>
int main()
{
    int a,b;
    int temp;
     printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    temp = a;
    a= b;
    b= temp;
    printf("b=%d\n",temp);
    printf("a=%d\n",a);

}


