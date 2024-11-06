#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int t)
{
    if(t==0)
    {
        return 1;
    }
    return t*fact(t-1);
}
int main ()
{
    long long int n;
    cin>> n;
    cout<<fact(n);
}