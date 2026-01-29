#include<iostream>
#include<vector>
using namespace std;


void maximumSubArray(int arr[],int n){
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
           for(int i=st;i<=end;i++){
            cout << arr[i];
           }
           cout << " ";
        }
        cout << endl;
    }

}
//Implementation of kadane algorithm
int maxiMumSubarraySum(vector<int>arr){
    int currentMax=0;
    int globalMax=0;
    for(int i=0;i<arr.size();i++){
        currentMax=max(arr[i],currentMax + arr[i]);
        if(currentMax > globalMax){
            globalMax=currentMax;
        }
    }
    return globalMax;

}


int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    maximumSubArray(arr,n);
    vector<int>arr2 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans=maxiMumSubarraySum(arr2);
    cout << "The Maximum Subarray Sum is : " << ans << endl;

    return 0;
}