#include<bits/stdc++.h>
using namespace std;
// void print_N(int t)
// {
    
//     for(int i=1;i<=t;i++)
//     {
//         cout<<i<<endl;

//     }


// }
// int main ()
// {
//     int n;
//     cin>>n;
//     print_N(n);

    
// }

void print_N(int t,int k)
{
  if(t>k)
    {
        return;
    }

    cout<<t<<endl;
    print_N(t+1,k);
    
    

}
int main ()
{
    int n;
    cin>>n;
    print_N(1,n);

    
}
