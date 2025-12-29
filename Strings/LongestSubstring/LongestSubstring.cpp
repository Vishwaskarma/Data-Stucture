#include<iostream>
#include<vector>
using namespace std;



string LongestSubstring(string st){
    vector<vector<string>>finalString;
    string res;
    for(int i=0;i<st.size();i++){
        
        if(res.size() <1)  res+=st[i];
        for(int i=0;i<res.size();i++){
            if(res[i]!=st[i]){
                res+=st[i];
            }
            else{
                finalString.push_back({res});
               continue;
            }

        }

    }

}

int main(){
    string s="abcabcbb";
    string Longest=LongestSubstring(s);
    return 0;
}