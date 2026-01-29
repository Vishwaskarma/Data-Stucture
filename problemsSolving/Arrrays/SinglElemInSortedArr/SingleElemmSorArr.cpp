#include <iostream>
#include <vector>
using namespace std;

int SingleElemSortedArr(vector<int> arr)
{
    int st = 0, end = arr.size() - 1;
    int size = arr.size();
    if (size == 1)
        return arr[0];
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mid == 0 && arr[0] != arr[1])
            return arr[mid];
        if (mid == size - 1 && arr[size - 1] != arr[size - 2])
            return arr[mid];
        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
            return arr[mid];
        if (mid % 2 == 0)
        { // even
            if (arr[mid] == arr[mid + 1])
            {
                st = mid + 1; // Search right
            }
            else
            {
                end = mid - 1; // Search left
            }
        }
        else
        { // odd
            if (arr[mid - 1] == arr[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = SingleElemSortedArr(arr);
    cout << "Answer: " << ans << endl;

    return 0;
}