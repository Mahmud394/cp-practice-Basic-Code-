#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   
    for(int i=0;i<n/2;i++)
    {
         swap(a[i], a[n - i - 1]);// array swap
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    // int a,b;
    // cin>>a>>b;
    // swap(a,b);
    // cout<<a<<" "<<b;


    return 0;
}