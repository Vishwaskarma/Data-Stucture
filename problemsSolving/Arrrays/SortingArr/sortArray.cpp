#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


//Through inbuilt Method
void sortArray(vector<int> & arr)
{
     std::sort(arr.begin(),arr.end());
}

//Through DutchNationalFlagAlgo
vector<int> DutchNationalFlagAlgo(vector<int> &arr)
{

    int mid = 0;
    int low = 0;
    int high = arr.size() - 1;

    while (mid <= high)
    {
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;

        }else{
            swap(arr[mid],arr[high]);high--;
        }
    }
    return arr;
}

int main()
{
    int n = 10;
  vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
  sortArray(arr);
  for(int num:arr)cout <<num << " ";
  vector<int> ans = DutchNationalFlagAlgo(arr);
  for(int x :ans)cout <<"This is DutchNationalFlagAlgo: " <<  x<< endl;
  return 0;
}