#include<stdio.h>
int maximum (int N[])
{
    int i,max;
     int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter %d array elemant:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
     max= N[0];
    for (i=1;i<n;i++)
    {
        if(max<N[i])
            max=N[i];
    }
    return max;
}
int main ()
{
   int num[100];
    printf("Maximum = %d\n",maximum(num));
}
