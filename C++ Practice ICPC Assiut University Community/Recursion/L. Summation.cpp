#include<bits/stdc++.h>
using namespace std;
long long int summation(long long int arr[],int n)
{
    if (n <= 0) 
        return 0;
    
     return arr[n - 1] + summation(arr, n - 1);
    
}
int main ()
{
    int n;
    cin>>n;
   long long  int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   long long  int result = summation(arr,n);
    cout<<result<<endl;
}