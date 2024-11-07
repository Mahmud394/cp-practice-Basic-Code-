#include<bits/stdc++.h>
using namespace std;
int max_value(int *arr,int n)
{
    int mx=arr[0];
    int i;
    for(i=0;i<n;i++){
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    cout<<mx;
    /*
     int ma= INT_MIN;
     for(int i=0;i<n;i++)
    {
        ma=max(ma,arr[i]);

    }
    cout<<ma;

    */
}
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max_value(arr,n);
}