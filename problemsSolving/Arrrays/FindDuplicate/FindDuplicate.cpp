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




int main(){
   vector<int> arr={1,2,3,4,5,1,6,7};
   //BruteForce approach
   vector<int>res= findDuplicate(arr);
   for(int x:res)cout << "Answer using Bruteforce" << x << endl;

   //using set
   int res2=findDuplicateUsingSet(arr);
   cout <<"Answer using Set: "<< res2 << endl;
   

   return 0;
}