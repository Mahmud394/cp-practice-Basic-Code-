#include<stdio.h>
int main()
{
    char s1[30];
    int i= 0,len;
    printf("Enter your full name :");
    gets (s1);
    printf("Ful name : %s\n",s1);

    len = strlen(s1);
    printf("Length of the name = %d\n",len);

    printf("Display string Charcter-wise :\n");
    while (s1[i]!='\0')
    {
        printf("\t");
        printf(" %c\n",s1[i]);
        i++;
    }
}
