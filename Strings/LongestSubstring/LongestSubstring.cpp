#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;



int  LongestSubstring(string st){
    int maxLen=0;
    int left=0;
    unordered_map<char,int>m;
    vector<char>ch(st.begin(),st.end());
    for(int right=0;right<st.size();right++){
      if (m.find(st[right]) != m.end() && m[st[right]] >= left) {
            left = m[st[right]] + 1;
        }

        m[st[right]] = right;

        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;


  
        
       
    

}

int main(){
    string s="abcabcbb";
    int Longest=LongestSubstring(s);
    cout << Longest << endl;
    return 0;
}