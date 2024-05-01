#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int N;
   cin>>N;
 int A[N];
 int ma=INT_MAX;
    for(int i=0;i<N;i++)
    {
       cin>>A[i];
       ma=min(ma,A[i]);
    }
    cout<<ma;




}
