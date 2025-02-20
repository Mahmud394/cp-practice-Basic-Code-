#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    
    while (getline(cin, line)) {
        string result;
        stringstream ss(line);
        string word;
    
        while (ss >> word) {
            sort(word.begin(), word.end());
            result += word;
        }
        sort(result.begin(), result.end());
        
        cout << result << endl;
    }
    
    return 0;
}
