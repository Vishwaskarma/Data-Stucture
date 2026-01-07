#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int st = 0;
    int end = nums.size() - 1;
    vector<int> ar;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target && nums[mid - 1] == target)
        {
            ar.push_back(mid - 1);
            ar.push_back(mid);
            return ar;
        }

        if (nums[mid] == target && nums[mid + 1] == target)
        {
            ar.push_back(mid);
            ar.push_back(mid + 1);
            return ar;
        }

        if (nums[mid] > target)
        {
            end = mid - 1;
        }
        if (nums[mid] < target)
        {
            st = mid + 1;
        }
    }
    ar.push_back(-1);
    ar.push_back(-1);
    return ar;
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> ans = searchRange(nums, target);
    for (int x : ans)
        cout << x << endl;

    return 0;
}
