#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int N;
    cin>>N;
   long int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
      for(int i=0;i<N/2;i++)
    {
        if(A[i]!=A[N-i-1])
           {
               cout<<"NO";
               return 0;
           }
    }
    cout<<"YES";


}




