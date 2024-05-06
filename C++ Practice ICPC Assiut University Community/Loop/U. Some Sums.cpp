#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N,A,B;
    cin>>N>>A>>B;
    int sum=0;
    for(int i=1;i<=N;i++)
    {
        int k=i;
        int m=0;
        while(k>0)
        {
            int z= k%10;
            m=m+z;
            k=k/10;
        }
        if(m>=A && m<=B)
        {
            sum= sum+i;
        }
    }
    cout<<sum;

}
