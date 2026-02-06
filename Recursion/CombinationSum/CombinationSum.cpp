#include<iostream>
#include<vector>
using namespace std;

void FindAllPossibleVector(int st,vector<int>&Candidate,int target,vector<int>&Current,vector<vector<int>>&FinalVector){
    if(target==0){FinalVector.push_back(Current);return;}
    if(st==Candidate.size()|| target<0){return;}
    Current.push_back(Candidate[st]);
    FindAllPossibleVector(st,Candidate,target-Candidate[st],Current,FinalVector);
    Current.pop_back();
    FindAllPossibleVector(st+1,Candidate,target,Current,FinalVector);


}

vector<vector<int>>Combination(vector<int>&candidates,int target){
  
   vector<int>Current;
   vector<vector<int>>FinalVector;

   int st=0;
  
FindAllPossibleVector(st,candidates,target,Current,FinalVector);
    
return FinalVector;

}

int main(){
     vector<int> candidates = {2,3,6,7};
     int target = 7;
     vector<vector<int>> result = Combination(candidates, target);
     for(auto&vecto:result){
        for(int x:vecto)cout<<x<<" ";
     }
     cout<<endl;

  
    

    return 0;

}