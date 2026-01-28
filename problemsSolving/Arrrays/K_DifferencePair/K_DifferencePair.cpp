#include<iostream>
#include<vector>
using namespace std;


int KDifferencePair(vector<int>nums,int target){
    int diff;
    int st=0;
    int end=nums.size()-1;
    while(st<end){
        int difference=nums[st]-nums[end];
        if(difference==target){diff+=1;st++;end--;}
        else if(diff<target)st++;
        else st++; if(st==end)end--;
       
    }
 
    return diff;
}

int main(){
    vector<int>nums = {1,2,3,4,5};int k = 1;
    int ans=KDifferencePair(nums,k);
    cout << ans << endl;
    return 0;
}