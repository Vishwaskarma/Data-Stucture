#include<iostream>
#include<vector>
using namespace std;

int RemoveElement(vector<int>&arr,int val){
    int count=0;
    int left=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=val)arr[left++]=arr[i];
        
    }
    return left; 

}

int main(){
    vector<int>arr={3,2,2,3};
    int val=3;
    int ans=RemoveElement(arr,val);
    cout << ans <<endl;
    return 0;
}