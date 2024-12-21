#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;  
 
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;  
        int row1 = min(a, m);  
        int row2 = min(b, m);  
        int remaining_row1 = m - row1;
        int remaining_row2 = m - row2;
 
        s
        int remaining_seats = remaining_row1 + remaining_row2;
        int remaining_monkeys = c;
 
      
        int seated_from_c = min(remaining_monkeys, remaining_seats);
 
       
        cout << row1 + row2 + seated_from_c << endl;
    }

    return 0;
}