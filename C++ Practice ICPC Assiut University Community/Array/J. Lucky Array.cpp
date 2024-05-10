#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count;
    cin>>n;
    int odd =0,even=0;
    int a[n],freq[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       freq[i] = -1;
    }
    for(int i=0; i<n; i++)
    {
        count = 1;
        for(int j=i+1; j<n; j++)
        {

            if(a[i]==a[j])
            {
                count++;


                freq[j] = 0;
            }
            if(freq[i] != 0)
            {
            freq[i] = count;
            }

        }
         if(freq[i] %2== 0)
            {
                cout<<"Lucky";
                break;
            }
            else{
                cout<<"Unlucky";
                break;

    }
    }

}
