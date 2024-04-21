#include<bits/stdc++.h>
using namespace std;
int main ()
{
        int A,B,C;
    cin>>A>>B;
    int n1=A;
   int n2=B;
    while(n2!=0)
    {
       C=A%B;
       n1=n2;
       n2=C;
    }
    cout<<n1;
}
