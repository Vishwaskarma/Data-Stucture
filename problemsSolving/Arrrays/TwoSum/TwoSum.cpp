#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute force Approach
vector<int> TwoSumBrute(int target, vector<int> &arr)
{
    vector<int> pair;
    int currentElem = arr[0];
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                pair.push_back(i);
                pair.push_back(j);
                return pair;
            }
        }
    }
    return pair;
}

//Better solution using two pointer approach
vector<int> TwosumTwopointer(int target, vector<int> &arr)
{
     sort(arr.begin(), arr.end());
    int startPointer = 0;
    int endPointer = arr.size() - 1;
    vector<int> pair;
    while (startPointer < endPointer)
    {
        int Total = arr[startPointer] + arr[endPointer];
        if (Total == target)
        {
            pair.push_back(startPointer);
            pair.push_back(endPointer);
            return pair;
        }
        if (Total > target)
        {
            endPointer--;
        }
        else
        {
            startPointer++;
        }
    }
    return pair;
}

int main()
{
    vector<int> arr = {5, 2, 11, 7, 15};
    int target = 9;
    //Brute force Approach
    vector<int> result = TwoSumBrute(target, arr);
    for (int x : result)
    {
        cout << x << endl;
    }
    // Two pointer approach
    vector<int> result2 = TwosumTwopointer(target, arr);
    for (int x : result2)
    {
        cout << "This is better approach result: " << x << endl;
    }
    return 0;
}