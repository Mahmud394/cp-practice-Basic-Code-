//Write a program to insert an element in a 1D array.

#include<stdio.h>
int main(){
   int A[100],pos,i,size,value;
   printf("enter size of array:");
   scanf("%d",&size);
   printf("enter %d elements are:",size);
   for(i=0;i<size;i++)
      scanf("%d",&A[i]);
   printf("enter the position where you want to insert the element:");
   scanf("%d",&pos);
   printf("enter the value :");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
      A[i+1]=A[i];
   A[pos-1]= value;
   printf("final array after inserting the value is");
   for(i=0;i<=size;i++)
      printf("%d ",A[i]);
   return 0;
}
