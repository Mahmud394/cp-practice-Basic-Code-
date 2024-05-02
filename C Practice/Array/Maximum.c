#include<stdio.h>
int main ()
{
    int num[100],n,i,max;
    printf("Enter How many number :");
    scanf("%d",&n);
    printf("Enter array elemant:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max= num[0];
    for (i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Maximum = %d\n",max);




}

