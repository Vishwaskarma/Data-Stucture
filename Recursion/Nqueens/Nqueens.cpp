#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool isSafe(vector<string>& board, int row, int col, int n) {
    // Horizontally 
    for(int j = 0; j < n; j++) {
        if(board[row][j] == 'Q') return false;
    }

    // Vertically 
    for(int i = 0; i < n; i++) {
        if(board[i][col] == 'Q') return false;
    }

    // Upper left diagonal
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if(board[i][j] == 'Q') return false;
    }
    
    // Upper right diagonal
    for(int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if(board[i][j] == 'Q') return false;
    }
    

    return true;
}

void nQueen(vector<string>& board, int row, int n, vector<vector<string>>& ans) {
    if(row == n) {
        ans.push_back(board);
        return;
    }
    
    for(int col = 0; col < n; col++) {
        if(isSafe(board, row, col, n)) {
            board[row][col] = 'Q';
            nQueen(board, row + 1, n, ans);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    nQueen(board, 0, n, ans);
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of queens (N): ";
    cin >> n;
    
    vector<vector<string>> solutions = solveNQueens(n);
    
    cout << "Number of solutions: " << solutions.size() << endl << endl;
    

    for(int i = 0; i < solutions.size(); i++) {
        cout << "Solution " << i + 1 << ":" << endl;
        for(int j = 0; j < n; j++) {
            cout << solutions[i][j] << endl;
        }
        cout << endl;
    }
    
    return 0;
}