#include<stdio.h>
int main ()
{
    int num[100],n,i,max,min;
    printf("Enter How many number :");
    scanf("%d",&n);
    printf("Enter N :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

     min = num[0];
    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("Minimun = %d\n",min);



}
