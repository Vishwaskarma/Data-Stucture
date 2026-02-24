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

    return 0;
}