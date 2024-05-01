#include<stdio.h>
int main()
{
   int mark;

   printf("Enter mark: ");
   scanf("%d", &mark);

   switch( mark/5  )
   {


   case 1:
     printf("Grade: A+");
     break;

   case 2:
     printf("Grade: A");
     break;

   case 3:
     printf("Grade: A-");
     break;

   case 4:
     printf("Grade: B");
     break;

   case 5:
     printf("Grade: C");
     break;

   default:
     printf("Grade: F");
     break;

   }

   return 0;
}
