//A. Say Hello With C++

/*Given a name S. Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name.
Example
input :
programmer
output :
Hello, programme
*/


#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
    getline(cin,S);
    cout<<"Hello, "<<S;
    return 0;
}
