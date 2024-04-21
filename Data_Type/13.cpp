#include<bits/stdc++.h>
using namespace std;
int main()
{
   char X;
   cin>>X;
   if(X>=48 && X<=57)
   {
       cout<< "IS DIGIT";
   }
   if(X>=65 && X<=96)
   {
       cout<<"ALPHA"<<endl;
       cout<<"IS CAPITAL";
   }
   if(X>=97 && X<=122)
   {
     cout<<"ALPHA"<<endl;
       cout<<"IS SMALL" ;
   }
    return 0;

}

