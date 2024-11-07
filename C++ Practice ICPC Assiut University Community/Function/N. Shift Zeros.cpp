#include<bits/stdc++.h>
using namespace std;
int Shift_Zeros(int *arr,int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
         if (arr[i] != 0) {
            arr[j++] = arr[i];
        }

    }
     while (j < n) {
        arr[j++] = 0;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
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
    Shift_Zeros(arr,n);
}