#include<iostream>
#include<vector>
using namespace std;

int RemoveDuplicatesFromSortedArrarSecond(vector<int>&arr){
    int count=0;
    for(int i=0;i<arr.size();i++){
        cout << arr[i]<<endl;
    }
    return count;

}

int main(){
    vector<int>nums = {1,1,1,2,2,3};
    int ans=RemoveDuplicatesFromSortedArrarSecond(nums);
    cout<< ans <<endl;
    return 0;
}