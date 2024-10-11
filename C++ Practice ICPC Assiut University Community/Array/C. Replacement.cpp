#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
   long int A[N];
    for(int i=1;i<=N;i++)
    {
        cin>>A[i];

       if(A[i]<=10)
        {
           // printf("A[%d] = %d\n",i,A[i]);
            cout<<"A"<<"["<<i<<"]"<<" = "<<A[i]<<endl;
        }
    }
    return 0;


}
