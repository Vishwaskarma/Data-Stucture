#include<iostream>
#include<vector>
using namespace std;


int RemoveDuplicatesSortedArrThree(vector<int>&arr){
    int count=1;
    int left=1;
    if(left<arr.size()){
    for(int i=1;i<arr.size();i++){
        arr[i]==arr[i-1] ? count+=1: count=1;
        if(count<=3)arr[left++]=arr[i];
    }
}
return left;



}

int main(){
    vector<int>arr={1,1,1,1,2,2,2,2,3,3};
    int ans=RemoveDuplicatesSortedArrThree(arr);
    cout << ans << endl;
    return 0;
}