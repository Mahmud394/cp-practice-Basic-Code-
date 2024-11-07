#include<bits/stdc++.h>
using namespace std;
int max_min(int *arr,int n)
{
    //min
    int mi= INT_MAX;
    for(int i=0;i<n;i++)
    {
        mi=min(mi,arr[i]);

    }
    //cout<<mi;
    //max
    int ma= INT_MIN;
     for(int i=0;i<n;i++)
    {
        ma=max(ma,arr[i]);

    }
    cout<<mi<<" "<<ma;


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
    max_min(arr,n);
}
/*
 mx = arr1[0];
    mn = arr1[0];

    // Traverse the array to find the maximum and minimum elements
    for (i = 1; i < n; i++)
    {
        // Update mx if the current element is greater
        if (arr1[i] > mx)
        {
            mx = arr1[i];
        }

        // Update mn if the current element is smaller
        if (arr1[i] < mn)
        {
            mn = arr1[i];
        }
    }
    cout<<mx<<" "<<mn;
*/