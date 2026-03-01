#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//usjing brute force algorithms
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    // vector<vector<int>>finalArr={};
    // int st=0;
    // int end=candidates.size()-1;
    // while(st<=end){
    //     while(st<=end)
    // }
   
    // return finalArr;
        
}

int main(){
   vector<int>arr = {10,1,2,7,6,1,5}; int target = 8;
    vector<vector<int>> result = combinationSum2(arr, target);
     for(auto&vecto:result){
        for(int x:vecto)cout<<x<<" ";
     }
     cout<<endl;
    return 0;
}