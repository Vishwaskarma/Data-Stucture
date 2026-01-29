#include<iostream>
#include<vector>
using namespace std;



//unoptimized
int diaGonalSum(int row,int col,int mat[][4]){
    int sum=0;
    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){
            //primary diagonal
            if(i==j){
               sum += mat[i][i];

            }else{
                // secondary diagonal
                if(j== col - i - 1 && i != j){
                    sum+=mat[i][j];
                }
            }
        }
    }
    return sum;

}
int diaGonalSumOptimized(int row,int col,int mat[][4]){
     int sum=0;
    for(int i=0;i<row;i++){
        sum+=mat[i][i];
        if(i!=row-i-1){
            sum+=mat[i][row-i-1];
        }
    }
    return sum;
}
int main(){
    int row=4;
    int col=4;
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int ans=diaGonalSum(row,col,matrix);
    cout << ans << endl;
    int optimized=diaGonalSumOptimized(row,col,matrix);
    cout << optimized << endl;

    return 0;
}