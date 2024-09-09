/*Write a program in C to read 06 numbers
 from the keyboard and find whether the number
  is Negative or Positive and Find Total Multiplication
   of the Negative numbers. If the result is more than 
   -3267 then check whether the number is EVEN or ODD
    if it is less than -649 then Print 
    “I love my country.”, otherwise multiply 
    the result with your ID’s last 2 digit and print the output.
    */

#include <stdio.h>
int main() {
    int num[6];
    int neg= 1,result;
    printf("Enter 6 numbers:");
    for (int i = 0; i < 6; i++)
        {
        scanf("%d", &num[i]);
        }
     for (int i = 0; i < 6; i++)
     {
        if (num[i] >= 0)
            {
            printf("Positive = %d\n", num[i]);
        }
         else
        {
            printf("Negative = %d\n", num[i]);
        }
    }
    for (int i = 0; i < 6; i++)
        {
        if (num[i] < 0) {
            neg = neg * num[i];
        }
    }
    printf("multiplication of negative numbers: %d\n", neg);
    if (neg > -3267)
        {
        if (neg % 2 == 0) {
            printf("The product is EVEN\n");
        }
        else
        {
            printf("The product is ODD\n");
        }

        if (neg < -649)
            {
            printf("I love my country.\n");
        }
        else
            {
            result = neg * 94;
            printf(" multiplication with my id(94): %d\n", result);
        }
    }

    return 0;
}
