#include<stdio.h>
int main()
{
    int num[]={11,20,13,14,15,7,18,10,2,3,8,16,9,8};
    int value, position=-1,i;
    printf("Enter the value(1-20) you went :");
    scanf("%d",&value);

    for(i=0;i<20;i++)
    {
        if(value==num[i])
        {
            position = i+1;

            break;
        }
    }
        if (position == -1)
        {
            printf("item is not found");
        }
        else
             printf("The value position is = %d\n",position);

      getch();
    }
