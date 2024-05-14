#include<stdio.h>
int arraySum(int A[])
{
    int sum=0;
     for(int i=0;i<5;i++)
        {
            sum =sum+A[i];
        }
       return sum;
}
int main ()
{
    int a[5],i,n;
    printf("Enter  5 number  :");
    
    for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
        }
       int result= arraySum(a);
    printf("sum = %d\n",result);
    
}