#include<iostream>
#include<vector>
using namespace std;

void MooresAlgo(vector<int>& arr ){
    int Count=0;
    int Candidate=0;
    for(int i=0;i<arr.size();i++){
        if(Count==0){
            Candidate=arr[i];
        }
        if(Count==arr[i]){
            Count++;
        }
        else{
            Count--;
        }
    }
    cout << "The maximum Element is:" << Candidate;

}

int main(){
    vector<int>arr={1,2,2,1,1,3};
    MooresAlgo(arr);
}