#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N,i,x;
    int a=0,b=0,c=0,d=0;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>x;

    if(x%2==0)
    {
        a=a+1;
    }
    if(x%2!=0)
    {
       b=b+1;
    }
    if(x>0)
    {
       c=c+1;
    }
    if(x<0)
    {
        d=d+1;
    }

    }
    cout<<"Even: "<<a<<endl;
    cout<<"Odd: "<<b<<endl;
     cout<<"Positive: "<<c<<endl;
     cout<<"Negative: "<<d<<endl;
}
