#include<bits/stdc++.h>
using namespace std;
void print_n(int t)
{
    for(int i=1;i<=t;i++)
    {
        cout<<i;
        if(i<t)
        {
            cout<<" ";

        }
    }
}
int main ()
{
    int n;
    cin>>n;
    print_n(n);
}