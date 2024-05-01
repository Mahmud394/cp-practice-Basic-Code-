#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int A,B;
    char S;
    cin>>A>>S>>B;

    switch(S){
   case '+':
    {
        int result1 = A+B;
        cout<<result1;
        break;
    }
    case '-':
    {
        int result2 = A-B;
        cout<<result2;
        break;
    }
    case '*':
    {
        int result3 = A*B;
        cout<<result3;
        break;
    }
    default :
    {
         int result4 = A/B;
        cout<<result4;
        break;
    }

}
}
