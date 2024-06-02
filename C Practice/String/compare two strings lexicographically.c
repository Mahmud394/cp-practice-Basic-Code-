#include <stdio.h>
#include <string.h>

int main() {
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    int comp = strcmp(str1,str2);
    if(comp<0){
        printf("%s is lexicographicly smaller than %s ",str1,str2);
    }
    
    else if(comp>0){
        printf("%s is lexicographicly bigger than %s ",str1,str2);
    }
    
    else if(comp==0){
        printf("%s is lexicographicly equal to %s ",str1,str2);
    }
    return 0;
}
