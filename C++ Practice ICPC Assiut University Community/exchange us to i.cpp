/*
Example
InputCopy
9
us
sus
fungus
cactus
sussus
amogus
chungus
ntarsus
skibidus
OutputCopy
i
si
fungi
cacti
sussi
amogi
chungi
ntarsi
skibidi


*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        int len = word.length();

        if (word == "us") 
        {
            word = "i";  
        } 
        else if (len > 2 && word.substr(len - 2) == "us") 
        {
            word = word.substr(0, len - 2) + "i";  
        } 
        else if (word[len - 1] == 's')
        {
            word += "i";  
        } 
        else
        {
            word[len - 1] = 'i';  
        }

        cout << word << endl;
    }

    return 0;
    
}
