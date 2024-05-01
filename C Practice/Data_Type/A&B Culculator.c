#include<stdio.h>
int main()
{
    while(1)
    {
    int A , B, sum,sub,mul,rem,div;
    printf("Enter A & B :");
    scanf("%d %d",&A,&B);

    sum = A+B;
    printf("SUM = %d\n",sum);

    sub = A-B;
    printf("SUB = %d\n",sub);

    mul = A*B;
    printf("MUL = %d\n",mul);

    div = A/B;
    printf("DIV = %d\n",div);

    rem = A%B;
    printf("REM = %d\n",rem);
    printf("\n");
    }

}
