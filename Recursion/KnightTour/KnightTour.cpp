#include<iostream>
#include<vector>
using namespace std;

bool CheckValid(vector<vector<int>>&grid,int r,int c,int n,int expVal){
   if(r<0 || c<0 || r>=n || c>=n || grid[r][c]!=expVal)return false;
   if(expVal==n*n-1)return true;
   

    int ans1=CheckValid(grid,r-2,c+1,n,expVal+1);
    int ans2=CheckValid(grid,r-1,c+2,n,expVal+1);
    int ans3=CheckValid(grid,r+1,c+2,n,expVal+1);
    int ans4=CheckValid(grid,r+2,c+1,n,expVal+1);
    int ans5=CheckValid(grid,r+2,c-1,n,expVal+1);
    int ans6=CheckValid(grid,r+1,c-2,n,expVal+1);
    int ans7=CheckValid(grid,r-1,c-2,n,expVal+1);
    int ans8=CheckValid(grid,r-2,c-1,n,expVal+1);
return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7|| ans8;
    

}
bool checkValidGrid(vector<vector<int>>grid){
    return CheckValid(grid,0,0,grid.size(),0);
}

int main() {
    vector<vector<int>> grid = {
        {0,  3,  6,  9, 12},
        {5,  8,  1, 14,  7},
        {2, 19,  4, 11, 10},
        {17, 22, 13, 16, 15},
        {20,  3, 18, 21, 24}
    };

    bool checkans = checkValidGrid(grid);
    cout << checkans << endl;
    return 0;
}