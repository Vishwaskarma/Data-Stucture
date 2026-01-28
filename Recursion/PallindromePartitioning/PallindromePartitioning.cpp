#include<vector>
#include<iostream>
#include<string>
using namespace std;



bool checkPallindrome(string subpart){
    int st=0;
    int end=subpart.size()-1;
    while(st<=end) if(subpart[st++] != subpart[end--])  return false;
    return true;
}

void PallindromePartitioning(string s,vector<string>&subpart,vector<vector<string>>&ans){
    if (s.size()==0) {
    ans.push_back(subpart);
    return;  
    }
    for(int i=0;i<s.size();i++){
    string sub=s.substr(0,i+1);
   if(checkPallindrome(sub)) {
   subpart.push_back(sub);  
   PallindromePartitioning(s.substr(i+1),subpart,ans);
   subpart.pop_back();
        }

}

}

int main(){
    string s="aab";
    vector<string>Partitions;
    vector<vector<string>> PartitionsAns;
    PallindromePartitioning(s,Partitions,PartitionsAns);
    for (const auto& row : PartitionsAns) {
        for (string value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;

}
