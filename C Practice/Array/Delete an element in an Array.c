#include<stdio.h>
int main ()
{
    int arr[100];
    int i,n,index;
    printf("Enter array size :");
    scanf("%d",&n);
    printf("Enter array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array :");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\ngive a index number that you want to delete: ");
    scanf("%d",&index);
    for(i=index;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}
