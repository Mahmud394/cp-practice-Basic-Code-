#include <stdio.h>

int main()
 {
    int array[] = {1,2,3,4,5,6};
    int array_len = sizeof(array)/sizeof(array[0]);
   
    printf(" %d ",array_len);
    
    return 0;
}