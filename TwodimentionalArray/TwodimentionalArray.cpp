#include <iostream>
#include <vector>
using namespace std;


#include <iostream>
using namespace std;

//user input
void getingUserInput(int row, int col, int matrix[][3]) {
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >>  matrix[i][j] ;
        }
        
    }

}
//printing the matrix
void loopOnMatrix(int row, int col, int matrix[][3]) {
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    
    }

}
bool elemExistsOrNot(int row,int col,int target,int matrix[][3]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==target){
                return true;
            }
        }
    }
    return false;
}


int maximumRowSum(int row,int col,int matrix[][3]){
    int maxRowsSum=0;
    for(int i=0;i<row;i++){
        int currentSum=0;
        for(int j=0;j<col;j++){
            currentSum+=matrix[i][j];
            
        }
        maxRowsSum=max(maxRowsSum,currentSum);
    }
    return maxRowsSum;
}
int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4;
    int col = 3;
    int target=8;
    getingUserInput(row,col,matrix);
    loopOnMatrix(row, col, matrix);
    bool ans =elemExistsOrNot(row,col,target,matrix);
    int maxSumRow=maximumRowSum(row,col,matrix);
    cout << maxSumRow << endl;
    cout << ans << endl;
    
    return 0;
}