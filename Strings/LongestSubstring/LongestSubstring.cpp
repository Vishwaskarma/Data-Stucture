#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int LongestSubstring(string st)
{

    int count;
    int maxCount = INT_MIN;
    for (int i = 0; i < st.size(); i++)
    {
        count = 0;
        set<char> s;
        for (int j = i + 1; j < st.size(); j++)
        {

            if (s.find(st[j]) != s.end())
            {
                break;
            }
            s.insert(st[j]);
            count += 1;
        }
        maxCount = max(maxCount, count);
    }
    return maxCount;
}

int main()
{
    string s = "bbbbbb";
    int Longest = LongestSubstring(s);
    cout << Longest << endl;
    return 0;
}