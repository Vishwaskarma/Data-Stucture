#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// using inbuild function erase
int RemoveElemAccordingToGivenValue(vector<int>&arr, int val)
{
    
   int count=1;
    return count;
}

int main()
{

    int val = 2;
    vector<int> arr = {0, 1, 2, 2, 3, 0, 4, 2};
    int ans = RemoveElemAccordingToGivenValue(arr, val);
    cout << ans << endl;
  
    return 0;
}