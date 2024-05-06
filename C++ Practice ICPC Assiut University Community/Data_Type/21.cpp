#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float N;
    cin>>N;
     if(N==(int) N)
    {
        cout<<"int"<<" "<<(int )N;
    }
    else if (N==(float) N)
    {
        cout<<"float"<<" "<<(int)N<<" "<<setprecision (3) <<N - (int)N;
    }
}
