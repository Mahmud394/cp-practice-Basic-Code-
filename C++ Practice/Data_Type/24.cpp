#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
   if (l2>r1 && r2>r1 || l2<r1 && r2<l1)
   {
       cout<<"-1";
   }
   else
   {
       int M=max(l1,l2);
       int N=min (r1,r2);
       cout<<M<<" "<<N;
   }
}
