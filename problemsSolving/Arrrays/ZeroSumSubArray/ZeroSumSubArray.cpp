#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Using brute force approach
int ZeroSumSubArray(vector<int>&arr){

    int count=0;
   
    for(int i=0;i<=arr.size()-1;i++){
    int sum=0;
    for(int j=i;j<=arr.size()-1;j++){
    sum+=arr[j];
    if(sum==0)count++;
    }
}
return count;
}

//Using optimal approach 
int ZeroSumSubArrayUsingPrefixSum(vector<int>&arr){

int st=0;
int end=arr.size()-1;
int count=0;
int sum=0;
unordered_map<int,int>mp;mp[0]=1;

while(st<=end){
    sum+=arr[st];
    if(mp.find(sum)!=mp.end()){count+=mp[sum];}
    mp[sum]++;
    st++;
}  
return count;
}

    
  




int main(){
    vector<int>arr={6, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int ans=ZeroSumSubArray(arr);
    int ans2=ZeroSumSubArrayUsingPrefixSum(arr);
    cout << ans2 << endl;
    cout << ans << endl;

    return 0;

}