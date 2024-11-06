#include<bits/stdc++.h>
using namespace std;
int  ispalin(long long *s,int i,int j)
{
    if(i>j)
    {
        return 1;//return 0;
    }
    return s[i]==s[j] && ispalin(s,i+1,j-1);//return s[i]!=s[j] || ispalin(s,i+1,j-1)

}
int main ()
{
    int n;
    cin>>n;
    long long s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
   if( ispalin(s,0,n-1))
   {
    cout<<"YES";// NO
   }
   else{
    cout<<"NO";//YES
   }
}