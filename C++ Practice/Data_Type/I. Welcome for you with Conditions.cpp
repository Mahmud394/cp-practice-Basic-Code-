//I. Welcome for you with Conditions
/*
Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

Input
Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

Output
Print "Yes" or "No" according to the statement.

Examples
input
10 9
output
Yes
input
5 5
output
Yes
input
5 7
output
No
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int A,B;
    cin>>A>>B;
    if(A>B || A==B ){
        cout<<"Yes";
    }

    else{
        cout<<"No";
    }
    return 0;
}

