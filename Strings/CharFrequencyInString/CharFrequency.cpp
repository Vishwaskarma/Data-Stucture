#include <string>
#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

void FreqCount(string name)
{
    unordered_map<char, int> arr;
    for (int i = 0; i < name.size(); i++)
    {
        if (arr.find(name[i]) != arr.end())
        {
            arr[name[i]]++;
        }
        else
        {
            arr[name[i]] = 1;
        }
    }

    int GlobalMax = INT_MIN;
    int ans;
    for (auto x : arr)
    {

        if (x.second > GlobalMax)
        { 
            ans = x.second;
        }

        cout << x.first << "-" << x.second << endl;
        cout << "Global max is " << ans << endl;
    }
}

int main()
{
    string name = "pallindrome";
    FreqCount("madam");

    return 0;
}