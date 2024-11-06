#include<bits/stdc++.h>
using namespace std;
void print_N(int t,int k)
{
    if(t>k)
    {
        return;
    }
    
    print_N(t+1,k);
    cout<<t;
    if(t>1)
    {
        cout<<" ";
    }

}
int main ()
{
    int n;
    cin>>n;
    print_N(1,n);

    
}