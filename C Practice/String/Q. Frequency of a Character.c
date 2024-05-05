#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;
    int i = 0;
    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    while ( str[i] != '\0')
        {
        if (ch == str[i])
            count++;
            i++;
        }

    printf("Frequency of %c = %d", ch, count);

}

