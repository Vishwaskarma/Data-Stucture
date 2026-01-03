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
    int maxCount = 0;
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



int LongestSubstringWithTwoPointer(string s)
{
    int maxCount = 0;

    int start=0;

    set<char> c;

    for (int i = 0; i < s.size(); i++)
    {
      

        if (c.find(s[i]) != c.end())
        {   
             
             start++;
             c.erase(s[start]);
          
        }
        c.insert(s[i]);
        maxCount = max(maxCount, i - start + 1);

        
      
           
       
        
    }
    return maxCount;
}






int main()
{
    string s = "abcabcbb";
    int Longest = LongestSubstring(s);
    cout << Longest << endl;
    int LongestWithTwoPointer = LongestSubstringWithTwoPointer(s);
    cout << LongestWithTwoPointer <<endl;
    cout<<"This is Two pointer approach:"<<LongestWithTwoPointer <<endl;


    return 0;
}