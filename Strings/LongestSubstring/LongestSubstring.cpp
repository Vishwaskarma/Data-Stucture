#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<string> LongestSubstring(string st)
{
    vector<string> finalString;
    unordered_set<char> res;
    string current;
    for (int i = 0; i < st.size(); i++)
    {

        char ch = st[i];

        if (res.find(ch) == res.end())
        {
            res.insert(ch);
            current += ch;
        }

        else
        {
           finalString.push_back(current);

            res.clear();
            current.clear();

            res.insert(ch);
            current += ch;
        }
    }
    if (!current.empty()) {
        finalString.push_back(current);
    }

    return finalString;
}

int LongestSubstringCount(string st){
    int left=-1;
    int maxLength=0;
    // unordered_map<

    for(int i=0;i<st.size();i++){

    }
     return 
}
int main()
{
    string s = "abcabcbb";
    vector<string> Longest = LongestSubstring(s);
    for (const auto &inner : Longest)cout << inner;
    int ans=LongestSubstringCount(s);
    cout<< ans <<endl;

    return 0;
}