//Reverse a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], r_str[100];
    gets(str);
    int len = strlen(str);

    for(int i=0; i<len; i++)
    {
        r_str[i] = str[len-i-1];
    }
     r_str[len]='\0';

    puts(r_str);

    return 0;
}


