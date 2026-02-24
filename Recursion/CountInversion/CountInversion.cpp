#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



// using bruteforce approach find pair of inversion
vector<vector<int>>findInversionPair(vector<int>&arr){
    vector<vector<int>>pairs={};
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]>arr[j] && i<j){
                pairs.push_back({arr[i]});
                pairs.push_back({arr[j]});
            }
        }
    }
    return pairs;   
}
//printing count of inversion of pairs
int inversionCount(vector<int>&arr){
    int count=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]>arr[j]&&i<j)count++;
        }
    }
    return count;
}

// Optimized approach
    int Merge(vector<int>&arr,int start,int mid,int end){
    vector<int>Temprory(end-start+1);
    int left=start,right=mid+1,index=0;
    int inversionCount=0;
    while(left<=mid && right<=end){
      if  (arr[left]<=arr[right] ){ Temprory[index++]=arr[left++];}
     else{Temprory[index++]=arr[right++];inversionCount+=(mid-left+1);}
    }
    // condition if left array still have elem
    while(left<=mid){Temprory[index++]=arr[left++];}
    //condition if right array still have elem
    while(right<=end){Temprory[index++]=arr[right++];}
    for(int x:Temprory)cout <<"This is Temporary Array"<<  x << endl;

    for(int i = 0; i < Temprory.size(); i++)
    arr[start + i] = Temprory[i];
     return inversionCount;

}

int CountInversion(vector<int>&arr,int start,int end){
    
    if (start >= end)return 0;
    int mid=start+(end-start)/2;
    int left = CountInversion(arr, start, mid);
    int right = CountInversion(arr, mid + 1, end);
    int mergeCount = Merge(arr, start, mid, end);

    return left + right + mergeCount;

    
}

int main(){
   
    vector<int>arr={6,3,5,2,7};
    vector<vector<int>>ans=findInversionPair(arr);
    for (const auto& li : ans) {         
        for (int  element : li) {  
            cout << element << " ";
        }
        cout <<"End of printing pair"<< endl;
    }
    int  ans2=inversionCount(arr);
    cout<<"This is the result of Inverion Count" << ans2<<endl;
     int start=0;
    int end=arr.size()-1;
    int ans3=CountInversion(arr,start,end);
    cout << ans3<<endl;

    return 0;
}