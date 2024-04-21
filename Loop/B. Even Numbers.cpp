#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N,i;
    cin>>N;
   for(i=1;i<=N;i++)
    {
        if(i%2==0){
            cout<<i<<endl;
        }
        if(N==1)
        {
            cout<<-1;
        }

    }
    return 0;
}
