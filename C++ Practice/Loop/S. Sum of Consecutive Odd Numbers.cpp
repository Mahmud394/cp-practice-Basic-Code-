#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    while(x--){
        int n,m;
        cin>>n>>m;
    int c=0;
    if(n>m){
    swap(n,m);
    }
    for(int i=n+1;i<m;i++)
    {
      if(i%2!=0)
      {

      c=c+i;
      }
    }
    cout<<c<<endl;
    c=0;
    }

return 0;
}


