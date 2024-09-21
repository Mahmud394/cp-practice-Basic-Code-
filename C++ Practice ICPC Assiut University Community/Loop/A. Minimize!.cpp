#include<bits//stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int c=(b-a)-1;
        int result = (c-a)+(b-c);
        cout<<result;
    }
    cout<<endl;
}
