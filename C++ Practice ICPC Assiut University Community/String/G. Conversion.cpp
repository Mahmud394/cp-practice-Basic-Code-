#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
   int i=0;
   while(s[i]!=0)
   {
       if(s[i]>64 && s[i]<91)
       {
          cout<< s[i]+32;
       }
       else if (s[i]>96 && s[i]<123)
       {
         cout<<  s[i]-32;
       }
       i++;
   }

}
