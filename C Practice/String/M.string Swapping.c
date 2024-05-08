#include<stdio.h>
int main ()
{
    char A[20]="Bangladesh";
    char B[20] ="England";
    char temp [40];
    strcpy(temp,A);
    strcpy(A,B);
    strcpy(B,temp);
    printf("A = %s\n",A);
    printf("B = %s",B);
}

