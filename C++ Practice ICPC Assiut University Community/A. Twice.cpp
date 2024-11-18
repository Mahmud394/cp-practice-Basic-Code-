#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        int cont=0;
        int a[t];
        for(int i=0;i<t;i++)
        {
             cin>>a[i];

        }
        for (int i = 0; i < t; i++) {
            for (int j = i + 1; j < t; j++) {
                if (a[i] == a[j]) {
                    cont++;
                }
            }
        }
      
        cout<<cont<<endl;

    }
}