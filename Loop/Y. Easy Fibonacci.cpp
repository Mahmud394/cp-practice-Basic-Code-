#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    int fb[N];
     fb[0]=0;
     fb[1]=1;
    for(int i=2;i<N;i++)
    {
        fb[i]= fb[i-1]+fb[i-2];
    }
    for(int i=0;i<N;i++)
        {
    cout<<fb[i]<<" ";
    }

}
