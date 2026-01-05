#include<iostream>
#include<vector>
using namespace std;

void getPermutation(vector<int>& nums,int idx,vector<vector<int>>&ans){
    if(idx==nums.size())ans.push_back(nums);return;
    
for(int i=idx;i<nums.size();i++){
    cout << idx << endl;
    swap(nums[idx],nums[i]);   //idx place => ith elem choice 
    getPermutation(nums,idx+1,ans);
    cout << getPermutation <<endl;
    swap(nums[idx],nums[i]);
}
} 

vector<vector<int>>Permutation(vector<int>&nums){
    vector<vector<int>> ans;
    getPermutation(nums,0,ans);
    return ans;
}

int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>ans=Permutation(nums);
    for(vector<int> x:ans){
        for(int y:x){
            cout << y << endl;
        }

    }




    return 0;

}