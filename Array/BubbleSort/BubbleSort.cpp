#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

void BubbleSort(int arr[],int n){
for(int i=0;i<n-1;i++){
    bool isSwap=false;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
  if(!isSwap){
    return ;
  }
}

}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout <<arr[i] << " ";

    }
    cout << endl;

}

// int findFirstUniqueNumber(vector<int>arr){
//     sort(arr.begin(), arr.end());
//    int st=0;
//    int sec=st+1;
//    int end=arr.size()-1;
//    while(st<=end){
//     if(arr[st]==)
//    }
    


// }


int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    vector<int>arr2={1,2,1,4,3,2,4};
    BubbleSort(arr,n);
    printArr(arr,n);

    // int ans=findFirstUniqueNumber(arr2);
    // cout<<ans<<endl;
    return 0;
}