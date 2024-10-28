#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
   // scanf("%d",&n);
   cin>>n;
    int arr[n][n];
    int main_sum=0;
    int sec_sum=0;
    int ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           // scanf("%d",&arr[i][j]);
           cin>>arr[i][j];
            if(i==j)
            {
                main_sum=main_sum+arr[i][j];
            }
            if(i+j==n-1)
            {
                sec_sum=sec_sum+arr[i][j];
            }
        }
    }
    ans= main_sum-sec_sum;
    if(ans<0)
    {
        ans*=-1;
        cout<<ans;
    }
    else{
        cout<<ans;
    }

}