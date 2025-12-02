#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
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
//Optimized approach using map
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int sec=target-first;
            if(m.find(sec)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first]=i;
        }
        return ans;
        
    }


// Better and sorter approach
vector<int>TwoSumBetterOpto(vector<int>& nums,int target){
     unordered_map<int,int>m;
     vector<int>ans;
     for(int i=0;i<nums.size();i++){
        int need=target-nums[i];
        if(m.count(need)){
            ans.push_back(m[need]);
            ans.push_back(i);
           break;
        }
        m[nums[i]]=i;
     }
     return ans;
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
   //optimized approach
     vector<int> result3 = twoSum(arr,target);
    for (int x : result3)
    {
        cout << "This is better Optimized approach result: " << x << endl;
    }

    //Better optomized approach
    vector<int>result4=TwoSumBetterOpto(arr,target);
    for(int x:result4)cout <<"This is Better sorter and optimized approach "<<  x << endl;

    return 0;
}