#include <stdio.h>
#include <string.h>

int main() {
    char str[20],str1[10],str2[10];
    gets(str);
    int len = strlen(str);
    if(len%2 == 0){
        for(int i=0; i<len; i++){
            
            if(i<len/2){
                str1[i] = str[i];
            }
            else{
                str2[i-len/2] = str[i];
            }
        }
    }
    else{
        for(int i=0; i<len; i++){
            if(i<=len/2){
                str1[i] = str[i];
            }
            else{
                str2[i-len/2-1] = str[i];
            }
        }
        str2[len/2] = '\0';
    }
    puts(str1);
    puts(str2);
    return 0;
}