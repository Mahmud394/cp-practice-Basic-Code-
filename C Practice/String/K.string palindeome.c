#include<stdio.h>
int main ()
{
    char A[]="madam";
    int d;
    char B[50];
    int i=0,len=0,j;
   while(A[i]!='\0')
   {
       i++;
       len++;
   }
   for(j=0,i=len-1;i>=0;i--,j++)
   {
       B[j]=A[i];
   }
   B[j]=='\0';
   printf("reverse :%s\n",B);
   d= strcmp (A,B);
   if(d==0)
   {
       printf("Palindrome");
   }
   else
   {
       printf("Not palindrome");
   }

}


