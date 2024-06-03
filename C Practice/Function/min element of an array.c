#include<stdio.h>
int minimum (int N[])
{
    int i,min;
     int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter %d array elemant:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
     min= N[0];
    for (i=1;i<n;i++)
    {
        if(min>N[i])
            min=N[i];
    }
    return min;
}
int main ()
{
   int num[100];
    printf("Maximum = %d\n",minimum(num));
}
