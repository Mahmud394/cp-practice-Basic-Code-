#include<stdio.h>
int fibonacci(int k){
 int first =0,second=1,count=0,fibo;
 while(count<k)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first + second;
            first = second;
            second = fibo;
        }
        printf("%d ",fibo);
        count++;
    }
}
int main()
{
  int  n;
    printf("Enter Range :");
    scanf("%d",&n);
    fibonacci(n);
    
    
}