#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int c=0;
        long long sum=0;
        while(x>0)
        {
            if(x%2==1)
                c++;
                x=x/2;
        }
        for(int i=0;i<c;i++)
        {
            sum = sum+ pow(2,i);
        }
        cout<<sum<<endl;
    }
}
