//Write a program to find a maximum/minimum number from an array.

#include<stdio.h>
int main ()
{
    int num[100],n,i,max,min;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter %d array elemant:",n);
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

      min = num[0];
    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("Minimun = %d\n",min);


}


