#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          
            cin>>arr[i][j];

        }
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==k)
            {
                sum=1;
                break;
            }
        }
        if(sum)
        {
            break;
        }
    }
    if(sum)
    {
        cout<<"will not take number";
    }
    else{
        cout<<"will take number";
    }
    
}