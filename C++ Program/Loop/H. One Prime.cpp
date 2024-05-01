#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int n,count=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
