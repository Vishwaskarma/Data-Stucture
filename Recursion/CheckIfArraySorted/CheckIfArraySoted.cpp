#include <iostream>
#include <vector>
using namespace std;

bool CheckIsArraySorted(vector<int>& arr, int n)
{
    if (n <= 1)
    {
        return true;
    }
    
    if (arr[n-1] < arr[n-2])
    {
        return false;
    }
    
    return CheckIsArraySorted(arr, n-1);
}

int main()
{
    int n = 6;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    
    cout << CheckIsArraySorted(arr, n);
    
    return 0;
}