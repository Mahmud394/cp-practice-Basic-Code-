
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline (cin,a);
    string b;
    getline(cin,b);
    int len1 = a.size();
    int len2 = b.size();
    cout<<len1<<" "<<len2<<endl;
    string c=a+b;
    cout<<c<<endl;
    /*
    char d=c[0];
    a[0]=b[0];
    b[0]=d;
    */
    swap (a[0],b[0]);
    cout<<a<<" "<<b;
    return 0;
}
