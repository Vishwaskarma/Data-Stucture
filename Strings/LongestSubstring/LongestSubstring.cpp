#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int LongestSubstring(string st)
{

    int maxCount = 0;
    for (int i = 0; i < st.size(); i++)
    {

        set<char> s;
        for (int j = i; j < st.size(); j++)
        {

            if (s.find(st[j]) != s.end())
            {
                break;
            }
            s.insert(st[j]);
        }
        maxCount = max(maxCount, (int)s.size());
    }
    return maxCount;
}

int LongestSubstringWithTwoPointer(string s)
{
    int maxCount = 0;

    int start = 0;

    set<char> c;

    for (int i = 0; i < s.size(); i++)
    {

        while (c.find(s[i]) != c.end())
        {
            c.erase(s[start]);
            start++;
        }
        c.insert(s[i]);
        maxCount = max(maxCount, i - start + 1);
    }
    return maxCount;
}

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> charIndex;
    int left = 0;
    int maxLength = 0;
    for (int right = 0; right < s.size(); right++)
    {
        int currentElem = s[right];
        if (charIndex.find(currentElem) != charIndex.end())
        {
            left = charIndex[currentElem] + 1;
            cout <<"this is left index" <<left <<endl;
        }
        charIndex[currentElem] = right;
        cout<<"this is right index" << right << endl;
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() 
{
    string s = "abcabcbb";
    int Longest = LongestSubstring(s);
    cout << Longest << endl;
    int LongestWithTwoPointer = LongestSubstringWithTwoPointer(s);
    cout << LongestWithTwoPointer << endl;

    int ans = lengthOfLongestSubstring(s);
    cout << ans << endl;

    return 0;
}