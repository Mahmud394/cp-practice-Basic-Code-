#include<stdio.h>
int main (){

    printf("array size : ");
    int n;
    scanf("%d",&n);

    int arr[100];

    printf("array element : ");
    for(int i=0; i<n; i++){
        scanf(" %d", &arr[i]);
    }

    // bubble sort  -> O(n^2)
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
            int temp;
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           }
        }
    }

 printf("array element : ");
    for(int i=0; i<n; i++){
        printf(" %d", arr[i]);
    }
}
