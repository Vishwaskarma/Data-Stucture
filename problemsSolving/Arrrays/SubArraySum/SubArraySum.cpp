#include<iostream>
#include<vector>
#include<algorithm>
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











int  main() {
    vector<int> arr = {1,2,3};
    int k=3;

   int ans=SubArraySumBrute(arr,k);
   cout << ans << " ";
   return 0;
}