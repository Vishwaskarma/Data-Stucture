#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;


int SubArraySumBrute(vector<int>& arr,int k){
int count=0;
for(int i=0;i<arr.size()-1;i++){
    int sum=0;
    for(int j=0;j<arr.size()-1;j++){
        sum+=arr[j];
        if(sum==k){
            count++; 
        }
    }
}
return count;

}
int subArraySumEqualToK(vector<int>& arr,int k){

    int count=0;

    unordered_map<int,int>mpp;
    mpp[0]=1;
    int prefixSum=0;
    
    for(int j=0;j<arr.size();j++){
        prefixSum+=arr[j];
        int remove=prefixSum-k;
        count+=mpp[remove];
        mpp[prefixSum]+=1;
        
    }


    return count;

}


  





int  main() {
    vector<int> arr = {1,2,3};
    int k=3;

   int ans=SubArraySumBrute(arr,k);
   cout <<"This is BruteForce Approach is:"<< ans << endl;
   int ans2=subArraySumEqualToK(arr,k);
   cout <<"This is optimized way is:"<< ans2 << endl;
   return 0;
}