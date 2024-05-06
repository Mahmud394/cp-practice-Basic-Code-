#include<bits/stdc++.h>
using namespace std;
int main ()
{
   string s1,s2;
   cin>>s1>>s2;
   int n1=s1.size();
   int n2=s2.size();
   int x=min(n1,n2);
   string str="";
   for(int i=0;i<x;i++)
   {
      if(s1[i]>s2[i])
      {
          str=s1;
          break;

      }
      else if(s1[i]>s2[i])
      {
          str=s2;
          break;
      }

   }
   if(str=="")
   {
       if(n1<n2)
       {
           str=s1;
       }
       else
       {
           str=s2;
       }
   }
   cout<<str;
   return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char X[20];
    cin>>X;
    char Y[20];
    cin>>Y;
    int X_len=0,Y_len=0;
    int i=0,j=0;
    while(X[i]!='\0')
    {
        X_len ++;
        i++;
    }
    while(Y[j]!='\0')
    {
        Y_len ++;
        j++;
    }
    if(X_len>Y_len)
    {
        cout<<Y;
    }
    else
    {
        cout<<X;
    }

}
*/

