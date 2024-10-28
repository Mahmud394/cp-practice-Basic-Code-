#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[10001];
    char target[] = "hello";
    int j = 0; 
    cin>>s;

    // Loop through each character of the string S
    for (int i = 0; s[i] != '\0'; i++) {
        // If the current character matches the target character
        if (s[i] == target[j]) {
            j++;
            // If we have matched all characters of "hello"
            if (j == 5) {
               cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
