#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
//bruteforce approach for finding duplicates
vector<int>findDuplicate(vector<int>& arr){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                ans.push_back(arr[i]);
                break;
            }
            ans.push_back(-1);
        }
    }
    return ans;


}

int findDuplicateUsingSet(vector<int>& arr){
    unordered_set<int>s;
    for(int val:arr){
        if(s.find(val)!= s.end()){
            return val;
        }
        s.insert(val);
    }
        return -1;
}
int findDupWithSLowAndFastPointer(vector<int>& arr){
    int slow=arr[0],fast=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
       
    }
    while(slow !=fast);
    slow=arr[0];
    while(slow !=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}


   int main(){
   vector<int> arr={1,2,3,4,5,1,6,7};

   //BruteForce approach
   vector<int>res= findDuplicate(arr);
   for(int x:res)cout << "Answer using Bruteforce" << x << endl;

   //using set
   int res2=findDuplicateUsingSet(arr);
   cout <<"Answer using Set: "<< res2 << endl;

   //using LinkedList approach
   int es3=findDupWithSLowAndFastPointer(arr);
   cout << "Answer using Linked list approach: "  << es3 << endl;
   
   return 0;
   
}