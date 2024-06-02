//Sum of the digits in a number
#include <stdio.h>
/*
int main() {
    int a,i=0,sum = 0;
    scanf("%d",&a);
    while(a){
        sum += a%10;
        a = a/10;
        i++;
    }
    printf("Sum of the digits is %d ",sum);
    
    return 0;
}
*/
int digit(int a)
{
    int sum=0;
    int i=0;
    while(a)
    {
        sum=sum+a%10;
        a=a/10;
        i++;
    }
    return sum;
}
int main ()
{
    int a;
    scanf("%d",&a);
   int b= digit(a);
    printf("Sum of the digits is %d ",b);
}