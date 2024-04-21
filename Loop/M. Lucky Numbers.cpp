#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int A,B;
    cin>>A>>B;
  int a[A],b[B];
    int M=1,N=1;
  for(int i=1;i<A;i++)
  {
      for(int j=1;j<B;j++)
      {
          if(a[i]==4 || b[j]==7 || a[i]==7 || b[j]==4)
          {
             M=a[i];
             N=b[j];

          }

  }
  cout<<M<<" "<<N;

}
}

