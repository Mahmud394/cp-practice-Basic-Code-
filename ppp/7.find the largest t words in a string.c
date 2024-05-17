#include<conio.h>
int main()
{
    char string[100], longest[30];
    int word = 0, max = 0,i,j,index=0,length;
    printf("Enter Sentence: ");
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
            if(word > max)
            {
                max = word;
                index = i-max;
            }
            word = 0;
        }
    }
    if(word>max)
    {
        max = word;
        index = length-max;
    }
    j=0;
    for(i=index; i< index+max; i++)
    {
        longest[j] = string[i];
        j++;
    }
    longest[j] = '\0';
    printf("Longest word is: %s\n", longest);
}
