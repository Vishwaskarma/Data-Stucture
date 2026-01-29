#include<iostream>
#include<vector>
using namespace std;

void MoveZeros(vector<int>&arr){
    int index=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[index]);
            index++;

        }

    }


}



int main(){
    vector<int>arr={0,1,0,3,12};
    MoveZeros(arr);
    for(int x:arr)cout << x <<endl;
    return 0;
}