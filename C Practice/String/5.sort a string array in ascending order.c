#include<stdio.h>
int main()
{
    char str[100],ch;
    gets(str);
    int n= strlen(str);
     for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (str[j] > str[j + 1]) {
                ch = str[j];
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
        }
    }

    printf("After sorting the string appears like : \n"); 
    printf("%s\n\n", str);
}