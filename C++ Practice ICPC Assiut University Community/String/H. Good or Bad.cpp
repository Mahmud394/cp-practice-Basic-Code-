#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;

    while(n--)
    {
        cin>>s;
            //string. substr (size_s pos, size_s len) const;
         //string    c = s.substr(0, 3);

         // Find position of string
           int x=s.find("010");
           int y=s.find("101");
           if(x!= string::npos || y!= string::npos) //Check if position is -1 or no
           {
               cout<<"Good"<<endl;
           }
           else
           {
               cout<<"Bad"<<endl;
           }

    }
}
