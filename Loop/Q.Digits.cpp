#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     long int X;
    cin>>X;
    while(X--){
    long int A;
    cin>>A;
    if(A==0)
    {
        cout<<0<<" ";
    }
    else
    {
        while (A)
        {
            cout<<A%10<<" ";
            A=A/10;
        }
    }
    cout<<endl;
}
}


