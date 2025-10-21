#include<iostream>
#include<vector>
using namespace std;


int PeakIndexMountainArr(vector<int>nums){
    int st=1, end=nums.size()-2;
    while(st<end){
        int mid=st+(end-st)/2;
        if(nums[mid-1] < nums[mid] &&  nums[mid] > nums[mid+1]){return mid;}
        else if(nums[mid-1] <nums[mid]){
            st=mid+1;

        }else{
            end=mid-1;
        }
    }
    return -1;

}


int main(){
    vector<int> nums = {3,4,5,3,2};
    int ans=PeakIndexMountainArr(nums);
    cout << ans << endl;
    return 0;
}