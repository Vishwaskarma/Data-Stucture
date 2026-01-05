#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> FindMissingAndRepeatedNumber(vector<int> &arr)
{
    vector<int> ar;
    int repeated=-1;
    int missing=-1;

    sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); i++)
    {

        if (arr[i] == arr[i - 1])
        {
          repeated=  arr[i];
        }

        if (arr[i] - arr[i - 1] > 1)
        {
            missing=arr[i-1]+1;
           

        }
    }
    ar.push_back(repeated);
    ar.push_back(missing);
    return ar;
}

int main()
{

    vector<int> arr = {3, 1, 2, 5, 3};
    vector<int> ans = FindMissingAndRepeatedNumber(arr);
    for (int x : ans)
    cout << x << endl;
    return 0;
}