#include <stdio.h>
int main() {
    char s1[100], s2[100], i=0;
    printf("Enter string s1: ");
    gets(s1);
    while ( s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);

}

