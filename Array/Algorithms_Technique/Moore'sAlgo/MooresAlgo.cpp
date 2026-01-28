#include<iostream>
using namespace std;
#include<vector>

void MajorityElem(vector<int>& arr) {
    int count=0;
    int candidate=0;
    for(int i=0;i<arr.size();i++){
        if(count==0){
            candidate=arr[i];
        }
        if(count==arr[i]){
            count=count+1;

        }
        else{
            count=count-1;
            
        }
    }
    cout << "The majority of Elem is: " << candidate;
}


int main(){
    //Majority of elem using moore's algorithm
     vector<int> arr = {1, 2, 2, 1, 1};
    MajorityElem(arr);
    return 0;

}