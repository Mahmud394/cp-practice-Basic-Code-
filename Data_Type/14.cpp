#include<bits/stdc++.h>
using namespace std;
int main()
{
   char X;
   cin>>X;
  if (X>=65 && X<=96)
  {
      cout<<char(X+32);
  }
  if(X>92 && X<=122)
  {
      cout<<char(X-32);
  }
    return 0;

}


