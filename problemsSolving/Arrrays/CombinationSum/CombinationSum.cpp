#include<iostream>
#include<vector>
using namespace std;
bool checkToTarget(vector<int>&candidate,int n, int target,vector<int>FinalVector){
    int sum;
    while(sum==target && sum>target)sum=candidate[0]+=candidate[0]; if (sum==target) false;

    
    
}


vector<vector<int>>Combination(vector<int>&candidate,int target,int st,vector<int>FinalVector){
    vector<vector<int>>FinalVector;
   if(candidate.size()<=3)return;
   //Include the vector
   if(checkToTarget(candidate,st,target,FinalVector))FinalVector.push_back({});
   //exclude the vector
   FinalVector.pop_back();
   checkToTarget(candidate,st+1,target,FinalVector);

    
return FinalVector;

}

int main(){
   vector<int> candidates = {2,3,6,7};
   int target = 7;
   int st=0;
    vector<vector<int>>ans=CombinationSum(candidates,target,st);

    return 0;

}