#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRangeWithToPointer(vector<int> &nums, int target)
{

    int end = nums.size() - 1;
    vector<int> arr;
    int first = -1;
    int last = -1;
    for (int i = 0; i < end; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    if (first != -1 && last != -1)
    {
        arr.push_back(first);
        arr.push_back(last);
    }
    else
    {
        arr.push_back(-1);
        arr.push_back(-1);
    }
    return arr;
}

vector<int> searchRangeWithTwoBineraySearch(vector<int> &arr, int target)
{
    int st = 0;
    int end = arr.size() - 1;
    vector<int> ar;
    int first = -1;
    int last = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        if (arr[mid] < target)
        {
            st = mid + 1;
        }
    }
    st = 0;
    end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            st = mid + 1;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        if (arr[mid] < target)
        {
            st = mid + 1;
        }
    }
    if (first != -1 && last != -1)
    {
        ar.push_back(first);
        ar.push_back(last);
    }
    else
    {
        ar.push_back(-1);
        ar.push_back(-1);
    }

    return ar;
}

int main()
{
    vector<int> nums = {1, 2, 3, 3, 3, 4, 5};
    int target = 3;

    vector<int> ans2 = searchRangeWithToPointer(nums, target);
    for (int x : ans2)
        cout << "This is ans 2 with two pointer:" << x << endl;
    vector<int> ans3 = searchRangeWithTwoBineraySearch(nums, target);
    for (int x : ans3)
        cout << "This is ans 2 with two binarySearch:" << x << endl;

    return 0;
}
