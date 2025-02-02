#include <bits/stdc++.h>
using namespace std;

void printEvenIndicesReversed(int A[], int index) 
{
    if (index < 0) 
        return; 
    
    cout << A[index] << " "; 
    printEvenIndicesReversed(A, index - 2); 
}



int main() {
    int N;
    cin >> N;
    int A[N];
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int startIndex;
    if (N % 2 == 0) {
        startIndex = N - 2;
    } else {
        startIndex = N - 1;
    }
    printEvenIndicesReversed(A, startIndex); 
    
    return 0;
}
