#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string N;
    getline(cin,N);
    int n=N.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(N[i]-'0');
    }
    cout<<sum;
}
