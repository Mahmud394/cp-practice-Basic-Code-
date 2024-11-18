#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int k;
        cin >> k;
        
        int a[k];
        unordered_set<int> input_set;
        
        for (int i = 0; i < k; i++) {
            cin >> a[i];
            input_set.insert(a[i]);
        }
        
       
        for (int d = 1; d <= k; d++) {
            if (k % d == 0 && input_set.count(d) && input_set.count(k / d)) {
                cout << d << " " << k / d << endl;
                break;  
            }
        }
    }
    
    return 0;
}
