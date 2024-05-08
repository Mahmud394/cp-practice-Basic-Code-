#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n1;
    string s;
    cin>>n1;
    while(n1--)
    {
        cin>>s;
        int n= s.size();//string size
        if(n<=10)
        {
            cout<<s<<endl;
        }
        else if (n>10)
        {
            cout<<s[0]<<n-2<< s. back()<<endl;// string. back()= string last character
        }                                        // s[s.length() - 1]
    }
}
