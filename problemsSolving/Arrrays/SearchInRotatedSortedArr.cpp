#include<iostream>
#include<vector>
using namespace std;


int  SearchInRotatedSortedArr(vector<int>num ,int target){
    int st=0, end=num.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(num[mid]==target){
            return mid;
        }
        if(num[st]<=num[mid]){
         if(num[st]<=target && target<=num[mid]){
            end=mid-1;
         }else{
             st = mid + 1;
         }
        }
        else{
            if(num[mid]<=target && target<=num[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        }
        return -1;

}

int main(){
    vector<int>num={3,4,5,6,7,0,1,2};
    int target=0;

   int ans= SearchInRotatedSortedArr(num,target);
   cout<< ans << endl;
    return 0;

}