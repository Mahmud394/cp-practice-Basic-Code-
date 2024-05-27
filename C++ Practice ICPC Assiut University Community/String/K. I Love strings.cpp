#include<bits//stdc++.h>
using namespace std;
int main ()
{
    int m;
    cin>>m;
    string str;
    char ch;
    while(m--)
    {
        getline(cin,str);
    int n=str.size();
     for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (str[j] > str[j + 1]) {
                ch = str[j];
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
        }
    }
    cout<<str<<endl;
    }
}