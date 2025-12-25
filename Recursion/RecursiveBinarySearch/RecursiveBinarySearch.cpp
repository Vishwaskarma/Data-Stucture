#include <iostream>
#include <vector>
using namespace std;

int RecursiveBinarySearch(vector<int> &arr, int target, int st, int end)
{
    int n = arr.size();
    if (st > end)
    {
        return -1;
    }
 
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
       else if (arr[mid] > target)
        {
            return RecursiveBinarySearch(arr, target, st,  mid - 1);
        }
       else
        {
            return RecursiveBinarySearch(arr, target,  mid + 1, end);
        }
    
    }


int main()
{
   vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int ans = RecursiveBinarySearch(arr, target, 0, arr.size() - 1);
    cout << ans << endl;
    return 0;
}