#include<bits/stdc++.h>
using namespace std;
 
void printBinary(int N) {
   
    if (N == 0) {
        return;
    }
 
    printBinary(N / 2);
 
    cout << (N % 2);
}
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int N;
        cin >> N;
 
        if (N == 0) {
            cout << 0 << endl;
        } else {
            printBinary(N);
            cout << endl;
        }
    }
 
    return 0;
}