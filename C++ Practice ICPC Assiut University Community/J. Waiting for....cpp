#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int people_waiting = 0;
    for (int i = 0; i < n; ++i) {
        char event;
        int num;
        cin >> event >> num;
        if (event == 'P') {
            
            people_waiting += num;
        } else if (event == 'B') {
           
            if (people_waiting < num) {
                
                cout << "YES\n";
              
                people_waiting = 0;  
            } else {
               
                if (people_waiting - num > 0) {
                    
                    cout << "NO\n";
                } else {
                  
                    cout << "YES\n";
                    people_waiting = 0;  
                }
            }
        }
    }

    return 0;
}