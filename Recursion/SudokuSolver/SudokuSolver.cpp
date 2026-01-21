#include<iostream>
#include<vector>
using namespace std;

bool CheckExists(vector<vector<char>>&board,int row,int col,char num){
    // horizontallay check
    for(int i=0;i<9;i++)
    if(board[row][i]==num)return false;

    // vertically
    for(int i=0;i<9;i++)
    if(board[i][col]==num)return false;
}

int main(){
    return 0;
}    