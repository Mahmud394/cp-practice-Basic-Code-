#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
   long int A[N];
    int index=-1;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
   long int X;
    cin>>X;
    for(int i=0;i<N;i++)
    {
        if(X==A[i])
        {
            index =i;
            break;
        }
    }
      if(index==-1)
        {
            cout<<-1;
        }
        else{
    cout<<index;
        }

}
