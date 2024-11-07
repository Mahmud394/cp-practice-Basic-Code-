#include<bits/stdc++.h>
using namespace std;
long long int log_N(long long int x)
{
    if (x == 1) {
        return 0;
    }
    long long int result = log2(x);
    return result;

}
int main ()
{
    long long int n;
    cin>>n;
    long long int result1=log_N(n);
    cout<<result1;

}
/*
#include <iostream>

using namespace std;

// Recursive function to calculate ⌊log2(N)⌋
int log2Recursive(long long N) {
    // Base case: if N is 1, log2(1) is 0
    if (N == 1) {
        return 0;
    }
    // Recursively reduce N by halving and increment the count
    return 1 + log2Recursive(N / 2);
}

int main() {
    long long N;

    // Read input
    cin >> N;

    // Call the recursive function to calculate ⌊log2(N)⌋
    int result = log2Recursive(N);

    // Output the result
    cout << result << endl;

    return 0;
}


*/