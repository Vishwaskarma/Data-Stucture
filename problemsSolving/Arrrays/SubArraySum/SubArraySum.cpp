#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int SubArraySumBrute(vector<int> &arr, int k)
{
    int count = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int sum = 0;
        for (int j = 0; j < arr.size() - 1; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}
int subArraySumEqualToK(vector<int> &arr, int k)
{

    int count = 0;
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int prefixSum = 0;
    cout << prefixSum;

    for (int j = 0; j < arr.size(); j++)
    {
        prefixSum += arr[j];
        cout << prefixSum;

        int remove = prefixSum - k;
        count += mpp[remove];

        mpp[prefixSum] += 1;
    }

    return count;
}
int subarraySum(vector<int>& nums, int k) {
    int st=0;
    int sum=0;
    int count=0;
    int end=nums.size()-1;
    unordered_map<int,int>mp;
    mp[0]=1;


    while(st<=end){
        sum+=nums[st];
        if(mp.find(sum)!=mp.end()) count+=mp[sum];
        mp[sum]++;
        st++;
    }
        return count;

        

    }
        

int main()
{
    vector<int> arr = {1, 2, 3};
    int k = 3;
    int ans = SubArraySumBrute(arr, k);
    cout << "This is BruteForce Approach is:" << ans << endl;
    int ans2 = subArraySumEqualToK(arr, k);
    cout << "This is optimized way is:" << ans2 << endl;
    int ans3=subarraySum(arr,k);
    cout << ans3 << endl;
    return 0;
}