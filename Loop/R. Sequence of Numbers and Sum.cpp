#include<bits/stdc++.h>
using namespace std;

int main ()
{
    while(true)
    {
    int n,m;
    cin>>n>>m;
    if(n<=0 || m<=0)
    {
        break ;
    }
    int a=min(n,m);
    int b= max(n,m);
    int c=0;
    for(int i=a;i<=b;i++)
    {
        cout<<i<<" ";
       c+=i;
    }
    cout<<"sum ="<<c<<endl;
}
return 0;
}
