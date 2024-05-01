#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
   long int A[N];
    for(int i=1;i<=N;i++)
    {
        cin>>A[i];

        if(A[i]<0)
        {
            cout<<2<<" ";
        }
        else if (A[i]==0)
        {
            cout<<0<<" ";
        }
        else
        {
            cout<<1<<" ";
        }
    }
    return 0;


}
