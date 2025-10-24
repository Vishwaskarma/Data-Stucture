#include <iostream>
using namespace std;
#include <algorithm>
#include<vector>

void sortArray(vector<int> & arr)
{
     std::sort(arr.begin(),arr.end());
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 10;
std::vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sortArray(arr);
  for(int num:arr){
    std:: cout <<num << " ";

  }
  return 0;
}