#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
    getline(cin,S);
    int i=0;

    while(S[i]!='\0')
    {
        if(S[i]=='\\')

            break;
           cout<<S[i];

            i++;

    }

}
/*
 #include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
    getline(cin,S);
    int n= S.size();
    for(int i=0;i<n;i++)
    {
    if(S[i]=='\\')
        break;
        cout<<S[i];
    }
}
*/
