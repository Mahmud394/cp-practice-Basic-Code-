#include <bits/stdc++.h>
using namespace std;
double average(double arr[], int n)
{
    double b =0;
    for(int i=0;i<n;i++)
    {
        b += arr[i];
    }
    return b/n;
}
int main() 
{
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    double a = average(arr,n);
    cout<<fixed << setprecision(6)<< a<<endl;


    return 0;
}