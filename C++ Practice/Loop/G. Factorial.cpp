#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int T;
   cin>>T;
while(T--){
        long long int fact=1,N;
       cin>>N;
        for(int i=1;i<=N;i++)
        {
            fact=fact*i;
        }

        cout<<fact<<endl;
}
}
