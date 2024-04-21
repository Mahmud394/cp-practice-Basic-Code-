#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int A,B,C;
    char Q,S;
    cin >>A>>S>>B>>Q>>C;
    int r1,r2,r3;
    r1=A+B;
    r2=A-B;
    r3=A*B;
    if(S=='+')
    {
        if(C==r1)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<r1;
        }
    }
     if(S=='-')
    {
        if(C==r2)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<r2;
        }
    }
    if(S=='*')
    {
        if(C==r3)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<r3;
        }
    }
}
