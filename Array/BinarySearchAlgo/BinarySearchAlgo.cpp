#include<iostream>
#include<vector>
using namespace std;



//Binary search algorithm is only applicable if ur array contains sorted elem like in asc manner or dec meanner

int BinarySearchAlgo(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=start+end-start/2;
        if(target >arr[mid]){
            start=mid+1;
        }else if(target<arr[mid]){
            end=mid-1;
        }else{
           return   mid ;
        }
    }
    return -1 ;



}



int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10,12,14};
    int target=1;
    cout << BinarySearchAlgo(arr,target) << endl;




}

