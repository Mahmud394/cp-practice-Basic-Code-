#include<stdio.h>
int main ()
{
   /* char A[]="Mahmud Un Nabi";
    char B[] =" Iam a student";
    strcat (A,B);
    printf("A= %s\n",A);
    printf("B= %s\n",B);
    */
     char A[30];
    char B[30];
    gets(A);
    gets( B);
    int i=0,j=0,len=0;
    while(A[i]!='\0')
    {
        i++;
        len++;
    }
    while (B[j]!='\0')
    {
        A[len+ j] = B[j];
        j++;
    }
    printf("%s\n",A);
}

