#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N;  // Number of pearl codes (odd number)
        cin >> N;
        
        int thief_code = 0;  // Variable to hold the result
        
        // Reading the pearl codes and XORing them
        for (int i = 0; i < N; i++) {
            int code;
            cin >> code;
            thief_code ^= code;  // XOR operation
        }

        // Output the thief's pearl code
        cout << thief_code << endl;
    }

    return 0;
}
