#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    int ma,mi;
    ma= max(A,B);
    ma=max(ma,C);
    mi=min(A,B);
    mi=min(mi,C);
    cout<<mi<<" "<<ma;
    return 0;
}

