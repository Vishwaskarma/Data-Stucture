#include<vector>
#include<iostream>
#include<string>
using namespace std;

bool checkPallindrome(string s,string subpart){
    int st=0;
    int end=subpart.size();
    while(st<=end)if(s[st++]==s[end--]);
    return true;
}

vector<vector<string>>PallindromePartitioning(string s,vector<string>subpart,vector<vector<string>>ans){
    if (s.size()==0)ans.push_back({subpart});return;
    for(int i=0;i<s.size()-1;i++){
    string sub=s.substr(0,i+1);
    if(checkPallindrome(s,sub))subpart.push_back({sub});
    PallindromePartitioning(s.substr(i+1),subpart,ans);
    subpart.pop_back();
}
return ans;
}

int main(){
    string s="aab";
    vector<string>Partitions;
    vector<vector<string>> PartitionsAns;
    vector<vector<string>>answer=PallindromePartitioning(s,Partitions,PartitionsAns);
    for (const auto& row : answer) {
    for (string value : row) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}
    return 0;

}
