#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    int n=s.size();
    int palindrome =1;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            palindrome=0;
        }
    }
        if(palindrome)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

}


