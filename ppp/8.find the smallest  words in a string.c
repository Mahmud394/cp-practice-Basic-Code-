#include<stdio.h>
int main()
{
    char string[100], shortest[30];
    int word = 0, min=100,i,j,index=0,length;
    printf("Enter String: ");
    gets(string);
    length = strlen(string);
    for( i = 0 ; i< length ; i++)
    {
        if(string[i] != ' ')
        {
            word++;
        }
        else
        {
            if(word < min)
            {
                min = word;
                index = i-min;
            }
            word = 0;
        }
    }


    if(word< min)
    {
        min = word;
        index = length-min;
    }

    j=0;
    for(i=index; i< index+min; i++)
    {
        shortest[j] = string[i];
        j++;
    }
    shortest[j] = '\0';
    printf("Shortest word is: %s\n", shortest);


    return 0;
}
