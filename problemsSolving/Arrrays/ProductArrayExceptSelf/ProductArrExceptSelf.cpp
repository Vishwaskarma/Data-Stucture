#include<iostream>
#include<vector>
#include<numeric>

using namespace std;



// using brute force approach
vector<int> ProductArrExceptSelf(vector<int>nums){
    vector<int>arr={};
    for(int i=0;i<nums.size();i++){
        int product=1;
        for(int j=0;j<nums.size();j++){
          if (nums[i] == nums[j]) continue;
          product *= nums[j];
          
        }
        arr.push_back(product);
    }
    return arr;


        


    }



int main(){
    vector<int>nums={1,2,3,4};
    vector<int> ans= ProductArrExceptSelf(nums);
    for(int x:ans) cout << x << " ";
    return 0;


}

