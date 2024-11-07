#include<bits/stdc++.h>
using namespace std;
long long int log_N(int x)
{
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

int log2Recursive(int N) {
    // Base case: if N is 1, log2(1) is 0
    if (N == 1) {
        return 0;
    }
    // Recursive case: log2(N) is 1 + log2(N / 2)
    return 1 + log2Recursive(N / 2);
}

int main() {
    int N;

    std::cout << "Enter a positive integer N (must be a power of 2): ";
    std::cin >> N;

    // Check if N is a power of 2 (N & (N - 1)) == 0 for powers of 2
    if (N > 0 && (N & (N - 1)) == 0) {
        int result = log2Recursive(N);
        std::cout << "log2(" << N << ") = " << result << std::endl;
    } else {
        std::cout << "Please enter a positive integer that is a power of 2." << std::endl;
    }

    return 0;
}

*/