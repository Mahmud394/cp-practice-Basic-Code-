#include<bits/stdc++.h>
using namespace std;
int f[100005];
int main ()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        f[arr[i]]+=1;
    }
    for(int i=1;i<=m;i++)
    {
        cout<<f[i]<<endl;
    }
    

}