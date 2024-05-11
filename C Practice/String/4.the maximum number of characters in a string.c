#include <stdio.h>
int arr [100];
int main() {
    char str[100];
    int x;
    int max;
    printf("Enter a string: ");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
         x=str[i]-'a';
        arr[x]++;
    }
    printf("appears number of times : %d",arr[x]);
    max=0;
    for(int i =0;i<strlen(str);i++)
    {
        if (i != 32) { 
            if (str[i] > str[max]) {
                max = i; 
            }
    }
    }
    printf("The Highest frequency of character :%c \n",max  );
    
    
}