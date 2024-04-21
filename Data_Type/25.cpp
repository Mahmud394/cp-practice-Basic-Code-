#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int A,B,C,D;
    cin>>A>>B>>C>>D;
    long  int result;
    A=A%100;
    B=B%100;
    C=C%100;
    D=D%100;
    result = A*B*C*D;
    result=result%100;
    if(result<10)
    {
        cout<<0<<result;
    }
    else
    {
        cout<<result;
    }
}
