#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        char op;
        cin >> a >> op >> b;
        
        switch (op) {
            case '=':
                if (a == b) {
                    
                    cout << a << "=" << b;
                } else {
                    // If a != b, change to "<" or ">"
                    // Choosing "<" in case a < b, or ">" in case a > b
                    cout << (a < b ? a : a) << (a < b ? "<" : ">") << (a < b ? b : b);
                }
                break;
            case '>':
                if (a > b) {
                   
                    cout << a << ">" << b;
                } else {
                    // If a <= b, change to "<" or "="
                    cout << (a < b ? b+1 : b+1) << (a < b ? ">" : "=") << (a < b ? b : b);
                }
                break;
            case '<':
                if (a < b) {
                   
                    cout << a << "<" << b;
                } else {
                    // If a >= b, change to ">" or "="
                    cout << (a > b ? 0 : 0) << (a > b ? "<" : "=") << (a > b ? b : b);
                }
                break;
        }
        cout << endl;  
    }

    return 0;
}
