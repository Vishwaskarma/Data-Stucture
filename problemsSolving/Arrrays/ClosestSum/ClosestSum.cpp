#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// BruteForce Approach
int threeSumClosest(vector<int> &arr, int target)
{
    int n = arr.size() - 2;
    int closestSum = arr[0] + arr[1] + arr[2];
    int closestDifference = __INT_MAX__;
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n; i++)
    {
        int left = i + 1;
        int right = arr.size() - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == target)
            {
                return target;
            }
            if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
            int differenceTarget = abs(sum - target);
            if (differenceTarget<closestDifference ){
                closestSum=sum;
                closestDifference=differenceTarget;


            }
        }
    }
    return closestSum;
}

int main()
{
    vector<int> arr = {-1,2,1,-4};
    int target = 1;
    int ans = threeSumClosest(arr, target);
    cout << ans << endl;
    return 0;
}