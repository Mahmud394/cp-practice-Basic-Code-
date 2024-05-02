#include<stdio.h>
int main()
{
    while (1){
    int num1 , i,num2,gcd,lcd ,n1,n2,rem;
    printf("Enter  number1 :");
    scanf("%d",&num1);
    printf("Enter number2 :");
    scanf("%d",&num2);

    n1=num1;
    n2=num2;

    while (n2!=0)
    {
        rem =n1%n2;
        n1=n2;
        n2=rem;
    }

    gcd = n1;
    printf("GCD = %d\n", gcd);

    lcd = (num1*num2)/gcd;
    printf("LCD = %d\n",lcd);

    }

}
