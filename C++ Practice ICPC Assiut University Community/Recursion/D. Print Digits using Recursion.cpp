#include<bits/stdc++.h>
using namespace std;
void print_Digit(long long int n)

{
    if(n==0)
    {
        
        return;
    }
    long long int digit = n%10;
    //cout<<digit<<" "; start to the back
    print_Digit(n/10);
   
    cout<<digit<<" ";
}
int main ()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;

        if(n==0)
    {
        cout<<0;
        
    }

        print_Digit(n);
        cout<<endl;
    }
}