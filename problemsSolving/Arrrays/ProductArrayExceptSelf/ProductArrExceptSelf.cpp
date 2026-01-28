#include<iostream>
#include<vector>
#include<numeric>
#include<unordered_map>

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

//Usig two Pointer approach
vector<int>ProductArrExceptSelfUsingTwoPointer(vector<int>nums){
    unordered_map<int,int>map;
    
    int st=0;
    int end=nums.size()-1;
    int product=0;
    while(st<end){
    
    map[product*=nums[st]]=st;



    

   }
  
}



int main(){
    vector<int>nums={1,2,3,4};
    vector<int> ans= ProductArrExceptSelf(nums);
    for(int x:ans) cout << x << " ";

    return 0;


}

