#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float X;
    cin>>X;
    if(0<X && 25>=X)
    {
        cout<<"Interval [0,25]";
    }
    else if (25<X && 50>=X)
    {
        cout<<"Interval (25,50]";
    }
    else if (75<X && 100>=X)
    {
        cout<<"Interval (75,100]";
    }
    else if (50<X && 75>=X)
    {
        cout<<"Interval (50,75]";
    }
    else if(X>0)
    {
        cout<<"Out of Intervals";
    }
    else
    {
        cout<<"Out of Intervals";
    }

}
