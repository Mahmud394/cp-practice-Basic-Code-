//Find the largest number
#include <stdio.h>
/*
int max(int a, int b){
    return a>b ? a : b;
}

int main() {
    int a,b,c,mx;
    scanf("%d %d %d",&a,&b,&c);
    mx = max(a,b);
    mx = max(mx,c);
    printf("%d is the maximum number",mx);
    
    return 0;
}
*/
void max(int a,int b,int c)
{

    if(a>b && a>c)
    {
        printf("%d is big",a);
    }
  else  if(b>c && b>c)
    {
        printf("%d is big",b);
    }
    else{
         printf("%d is big",c);
    }

}
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    max(a,b,c);
}