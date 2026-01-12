#include <vector>
#include <iostream>
using namespace std;

int threeSumClosest(vector<int> &arr, int target)
{
    int finalSum=0;
    int sum;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        sum = 0;

        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            sum += arr[i] + arr[j];

            if(sum>target || sum<finalSum)
        }
    }
}

int main()
{
    vector<int> arr = {-1, 2, 1, -4};
    int target = 1;
    int closest = threeSumClosest(arr, target);
    return 0;
}