//H. Two numbers
/*
Input
Only one line containing two numbers A
 and B
 (1≤A,B≤103)
Output
Print 3 lines that contain the following in the same order:

"floor A
 / B
 = Floor result" without quotes.
"ceil A
 / B
 = Ceil result" without quotes.
"round A
 / B
 = Round result" without quotes.
Examples
input
10 3
output
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
input
10 4
output
floor 10 / 4 = 2
ceil 10 / 4 = 3
round 10 / 4 = 3
input
10 6
output
floor 10 / 6 = 1
ceil 10 / 6 = 2
round 10 / 6 = 2
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double A,B;
    cin>>A>>B;
    cout<<"floor " <<A<<" / "<<B<<" = "<<floor(A/B)<<endl;
    cout<<"ceil " <<A<<" / "<<B<<" = "<<ceil(A/B)<<endl;
    cout<<"round " <<A<<" / "<<B<<" = "<<round(A/B)<<endl;
    return 0;

}

