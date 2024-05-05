// Write a program to sort an array in ascending/ descending order.

#include<stdio.h>
int main ()
{
    int X,i,a,j;
    printf("Enter array size :");
    scanf("%d",&X);
    int A[X];
     printf("Enter %d array elemant :",X);
    for( i=0;i<X;i++)
    {
        scanf("%d",&A[i]);
    }
    for (i = 0; i < X; i++)
        {
   for (j = i + 1; j < X; j++){
      if (A[i] > A[j]){
         a = A[i];
         A[i] = A[j];
         A[j] = a;
      }
   }
}
   printf("ascending order:");
    for (i = 0; i < X; i++){
      printf("%d ", A[i]);
   }

    printf("\n");

   for (i = 0; i < X; i++)
        {
   for (j = i + 1; j < X; j++){
      if (A[i] < A[j]){
         a = A[i];
         A[i] = A[j];
         A[j] = a;
      }
   }
}
   printf("descending order:");
    for (i = 0; i < X; i++){
      printf("%d ", A[i]);
   }

}
