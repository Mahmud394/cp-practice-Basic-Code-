#include<stdio.h>
int main ()
{
   /* char A[]="Mahmud Un Nabi";
    char B[] =" Iam a student";
    strcat (A,B);
    printf("A= %s\n",A);
    printf("B= %s\n",B);*/

     char A[30]="Mahmud Un Nabi";
    char B[] =" Iam a student";

    int j=0,len;
   len= strlen(B);
    while (B[j]!='\0')
    {
        A[len+j] = B[j];
        j++;
    }
    printf("A= %s\n",A);


}

