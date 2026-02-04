  
  #include<iostream>
  #include<vector>
using namespace std;
    void Merge(vector<int>&arr,int start,int mid,int end){
    vector<int>Temprory(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=end){
      if  (arr[left]<=arr[right] ){ Temprory[index++]=arr[left++];}
      else{Temprory[index++]=arr[right++];}
    }
    // condition if left array still have elem
    while(left<=mid){Temprory[index++]=arr[left++];}
    //condition if right array still have elem
    while(right<=end){Temprory[index++]=arr[right++];}
    for(int x:Temprory)cout <<"This is Temporary Array"<<  x << endl;

     if (Temprory.size()==arr.size())for(int i=0;i<=Temprory.size();i++)Temprory[i]=arr[i];
    // index=0;
    // while(start<=end){arr[start++]=Temprory[index++];}
}

void MergeSort(vector<int>&arr,int start,int end){
    
        if(start==end)return;
        int mid=start+(end-start)/2;
        // Calling for left sorting 
        MergeSort(arr, start,mid);
        // calling for right sorting
        MergeSort(arr,mid+1,end);
        Merge(arr,start,mid,end);

    
}

int main(){
    vector<int>arr={7,6,4,3,2,8,9,1,10};
    int start=0;
    int end=arr.size()-1;
    MergeSort(arr, start,end);
    for(int i=0;i<arr.size()-1;i++){
        cout << arr[i] << endl;
    }
    return 0;

}