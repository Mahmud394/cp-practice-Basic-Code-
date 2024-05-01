#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,years,month,day;
    cin>>N;
    years = N/365;
    month = N%365/30;
    day = N%365%30;
    cout<<years<<" "<<"years"<<endl;
     cout<<month<<" "<<"months"<<endl;
      cout<<day<<" "<<"days";

}
