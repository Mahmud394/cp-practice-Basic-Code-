#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   long long X;
    cin>>X;
 long long  int A[X],sum=0;
  for(int i=0;i<X;i++)
  {
      cin>>A[i];
      sum= sum+A[i];
  }

  cout<<abs(sum)<<endl;
  }


