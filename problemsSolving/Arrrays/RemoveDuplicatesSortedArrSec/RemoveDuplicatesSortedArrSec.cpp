#include<iostream>
#include<vector>
using namespace std;



int RemoveDuplicatesFromSortedArrarSecond(vector<int>&arr){
    int left=1;
        int count=1;
        if(arr.size()<1)return 0;
        if(left<arr.size())
        for(int i=1;i<arr.size();i++){
        arr[i]==arr[i-1]?count+=1:count=1;
        if(count<=2)arr[left++]=arr[i];
        }
        
        return left;

}

int main(){
    vector<int>nums = {1,1,1,2,2,3};
    int ans=RemoveDuplicatesFromSortedArrarSecond(nums);
    cout<< ans<<endl;

    return 0;
}