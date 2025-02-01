#include <bits/stdc++.h>
using namespace std;
 
 
void addMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& result, int i, int j, int R, int C) {
   
    if (i >= R) return;
 
    
    result[i][j] = A[i][j] + B[i][j];
 
    
    if (j + 1 < C) {
        addMatrices(A, B, result, i, j + 1, R, C);
    } else if (i + 1 < R) {
        addMatrices(A, B, result, i + 1, 0, R, C);
    }
}
 
int main() {
   
    int R, C;
    cin >> R >> C;
 
   
    vector<vector<int>> A(R, vector<int>(C));
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> A[i][j];
        }
    }
 
   
    vector<vector<int>> B(R, vector<int>(C));
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> B[i][j];
        }
    }
 
    vector<vector<int>> result(R, vector<int>(C, 0));
 
 
    addMatrices(A, B, result, 0, 0, R, C);
 
   
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
}