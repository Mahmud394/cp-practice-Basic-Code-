#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
   long int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
         int mi=A[0];
         int index=-1;
        for(int i=1;i<N;i++)
                {
           if(mi>A[i])
            {
               mi=A[i];
            }
           for(int i=0;i<N;i++)
            {
            if(mi==A[i])
            {
            index =i+1;
            break;
            }

           }
          }
            cout<<mi<<" "<<index;

    }



