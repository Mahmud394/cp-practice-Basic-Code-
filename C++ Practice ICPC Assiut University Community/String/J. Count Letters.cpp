#include<bits//stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    int a[123]={};
    for(int i=0;i<s.size();i++)
    {
        a[s[i]]++;
    }
    for(int i=0;i<123;i++)
    {
        if(a[i]!=0)
        {
            cout<<(char)i<<" : "<<a[i]<<endl;
        }
    }
}