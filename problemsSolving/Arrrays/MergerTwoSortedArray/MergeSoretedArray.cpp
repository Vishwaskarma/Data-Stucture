#include <iostream>
#include <vector>
using namespace std;

vector<int> MergeSortedArray(vector<int> &arr, vector<int> &arr2)
{
    int i_idx = arr.size() - arr2.size() - 1;
    int j = arr2.size() - 1;
    int finalIdx = arr.size() - 1;
    while (i_idx >= 0 && j >= 0)
    {
        if (arr[i_idx] > arr2[j])
        {
            arr[finalIdx] = arr[i_idx];
            i_idx--;
        }
        else
        {
            arr[finalIdx] = arr2[j];
            j--;
        }
        finalIdx--;
    }
    while (j >= 0)
    {
        arr[finalIdx] = arr2[j];
        finalIdx--;
        j--;
    }
    return arr;
}

vector<int> MergeTwoSortedArr(vector<int> &arr, vector<int> &arr2)
{
    int m = arr.size();
    int n = arr2.size();
    int i = m - n - 1; 
    int j = n - 1;
    int Idx = m - 1;
    while (i >= 0 && j >= 0)
    arr[i] >= arr2[j] ?(arr[Idx--] = arr[i--]):(arr[Idx--] = arr2[j--]);
    while (j >= 0)arr[Idx--] = arr2[j--];
    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {8, 9, 10};

    vector<int> ans = MergeSortedArray(arr, arr2);
    for (int x : ans)
        cout << x << endl;
    vector<int> ans2 = MergeTwoSortedArr(arr, arr2);
    for (int x : ans2)
        cout << x << endl;
    return 0;
}