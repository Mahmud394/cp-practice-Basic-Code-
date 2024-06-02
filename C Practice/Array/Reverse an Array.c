#include <stdio.h>

int main() {
    int array[] = {1,2,3,4,5,6};
    int array_len = sizeof(array)/sizeof(array[0]);
    int r_array[array_len];
   
    for(int i=0; i<array_len; i++){
        r_array[i] = array[array_len-i-1];
    }
    
    for(int i=0; i<array_len; i++){
        printf("%d ",r_array[i]);
    }
    
    return 0;
}
