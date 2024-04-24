#include<bits/stdc++.h>
using namespace std;
int main ()
{
   /*     int A,B,C;
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
    */
    int A,B;
    cin>>A>>B;
    int mi,C;
    mi = min(A,B);
    for(int i=1;i<=mi;i++)
    {
        if(A%i==0 && B%i==0)
        C=i;
    }
    cout<<C;
}
