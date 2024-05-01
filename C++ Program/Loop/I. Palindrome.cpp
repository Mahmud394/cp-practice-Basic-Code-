#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int N,sum=0,temp,r;
    cin>>N;
    temp=N;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
       cout<<sum<<endl;
    if(N==sum)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }



}
