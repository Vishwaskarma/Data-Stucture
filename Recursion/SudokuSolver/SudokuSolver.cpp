#include<iostream>
#include<vector>
using namespace std;


bool CheckExists(int n,vector<vector<char>>&board,int row,int col){
    //converting int to char
    char c='0'+n;
    // horizontallay check
    for(int i=0;i<9;i++)
    if(board[row][i]==n)return false;

    // vertically
    for(int i=0;i<9;i++)
    if(board[i][col]==n)return false;

    //grid
    int r=row/3*3;int c=col/3*3;
    for(int k=0;k<3;k++){
        for(int m=0;m<3;m++){
            if(board[k][m]==c)return 0;
        }
    }
    return false;
    
}
bool SudokuFind(int i,int j,vector<vector<char>>& board){
    if(i==9)return 1;
    if(j==9)return SudokuFind(i+1,0,board);
    if(board[i][j]!='.')return SudokuFind(i,j+1,board);
    
    //for placing number
    for(int n=1;n<=9;n++){
    if(CheckExists(n,board,i,j)){
        board[i][j]='0'+n;
        if(SudokuFind(i,j+1,board))
        return 1;
        board[i][j]='.';


    }
    }
    return false;
    
}


int main(){
    return 0;
}    