#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char S[1000];
   cin>>S;
    char T[1000];
    cin>>T;
    int S_len=0,T_len=0;
    int i=0,j=0;
    while(S[i]!='\0')
    {
        S_len++;
        i++;
    }
     while(T[j]!='\0')
    {
        T_len++;
        j++;
    }
    cout<<(int)S_len<<" "<<(int)T_len<<endl;
    cout<<S<<" "<<T;

}

/*
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
   getline(cin,S);
    string T;
    getline(cin,T);
    int S_len=0,T_len=0;
    int i=0,j=0;
    while(S[i]!='\0')
    {
        S_len++;
        i++;
    }
     while(T[j]!='\0')
    {
        T_len++;
        j++;
    }
    cout<<(int)S_len<<" "<<(int)T_len<<endl;
    cout<<S<<" "<<T;

}
*/


