#include<stdio.h>
int main ()
{
    int N;
    int count =0;
    printf("enter any number:");
    scanf("%d",&N);
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Prime Number ");
    }
    else
    {
         printf("Not Prime Number ");
    }
}

