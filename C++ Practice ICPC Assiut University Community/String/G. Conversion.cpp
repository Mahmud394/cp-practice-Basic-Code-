#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
   int n=s.size();
   for(int i=0;i<n;i++)
   {
    if(s[i]==',')
    {
      cout<<" ";
      continue;
    }
    if(isupper(s[i]) )//uppercase
    {
     s[i]= tolower(s[i]);//lowercase
    }
    else{
      s[i]=toupper(s[i]);
    }
    cout<<s[i];

   }

}
