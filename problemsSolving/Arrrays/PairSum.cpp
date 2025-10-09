#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void pairSum(int arr[],int n,int le){

    for(int i=0;i<le;i++){
        for(int j=i+1;j<le;j++){
            if(arr[i]+arr[j]==n){
            cout << "Pair found at indices with brute force approach: " << i << " and " << j << endl;

            }


        }
    }



}

void twoPointerapproach(int arr[],int n,int le){
    // for(int i=0;i<le;i++){
    //     for(int j=le-1;j>0;j--){
    //         if(arr[i]+arr[j]==n){
    //         cout << "Pair found at indices with two pointer approach: " << i << " and " << j << endl;
    //         }
    //     }
    // }
    int i=0;
    int j=le-1;
    while(i<j){
        int ps=arr[i] + arr[j];
        if(ps>n){
            j--;
        }else if(ps<n){
            i++;
        }
        else{
          cout << "Pair found at indices with two pointer approach: " << i << " and " << j << endl;
        }
        
    }

}
int main(){
    int target=26;
    int le=4;
    int arr[]={2,7,11,15};
    //Better approach when ur array don't have elem sorted manner
    pairSum(arr,target,le);
    // Better approach when ur array already sorted
    twoPointerapproach(arr,target,le);
     return 0;

}
