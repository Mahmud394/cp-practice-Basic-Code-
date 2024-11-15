#include<bits/stdc++.h>
using namespace std;
long long  Equation(long long  x,long long  n)
{
    long long s= 0;
    for(int i=2;i<=n;i+=2)
    {
       s+=(long long)pow(x,i);
    }
    return s;
}
int main ()
{
    long long  n,m;
    cin>>n>>m;
    long long  result = Equation(n,m);
    cout<<result;
}