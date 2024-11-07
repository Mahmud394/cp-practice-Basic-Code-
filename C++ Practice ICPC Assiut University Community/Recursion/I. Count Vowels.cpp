#include<bits/stdc++.h>
using namespace std;
string  count_vowel(string s)
{
    //int n= strlen(s);
    int count =0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='i' || s[i]=='I'  || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')
        {
            count ++;
        }

    }
    cout<<count;
    

}
int main ()
{
    string s;
    getline(cin,s);
    count_vowel(s);
}