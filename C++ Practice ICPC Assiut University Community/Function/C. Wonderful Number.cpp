#include<bits/stdc++.h>
using namespace std;
long long   Wonderful_Number1(int n)
{
  long long bin = 0;

  int rem, i = 1;
  while (n != 0) {
    
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    
    i *= 10;
  }
  
  return bin;
}
long long Wonderful_Number2(long long  bin){

long long  remainder,reversed=0;
    while (bin != 0) {
        remainder = bin % 10;
        reversed = reversed * 10 + remainder;
        bin /= 10;
    }
    return reversed;
}

int main ()
{
    long long  n;
    cin>>n;
    long long  result1 = Wonderful_Number1(n);
      long long  result2 = Wonderful_Number2( result1);
    if(n%2!=0 && result1==result2)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}

/*
#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is wonderful
bool isWonderful(int N) {
    // Check if N is odd
    if (N % 2 == 0) return false;

    // Convert N to binary string
    string binary = "";
    while (N > 0) {
        binary = to_string(N % 2) + binary;  // Build the binary string
        N /= 2;
    }

    // Check if the binary string is a palindrome
    string reversed_binary = binary;
    reverse(reversed_binary.begin(), reversed_binary.end());
    
    return binary == reversed_binary;
}

int main() {
    int N;
    cin >> N;

    if (isWonderful(N)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

*/