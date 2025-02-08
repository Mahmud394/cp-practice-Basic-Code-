#include<stdio.h>
int main (){

    printf("array size : ");
    int n;
    scanf("%d",&n);

    char arr[100];

    printf("array element :\n");
    for(int i=0; i<n; i++){
        scanf(" %c", &arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
            int temp;
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           }
        }
    }

    char key;
    printf("Char to search : ");
    scanf(" %c", &key);


    int low=0, high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid] == key){
            printf("Char found at %d index\n",mid);
            break;
            
        }else if(arr[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }

    }

    return 0;
}