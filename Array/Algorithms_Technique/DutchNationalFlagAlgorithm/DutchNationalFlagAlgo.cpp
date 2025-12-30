#include <vector>
#include <iostream>
using namespace std;

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
    vector<int> arr = {2, 0, 2, 0, 1, 1, 0, 1, 2};
    vector<int> ans = DutchNationalFlagAlgo(arr);
    
    for(int x :ans){

        cout <<"This is DutchNationalFlagAlgo: " <<  x<< endl;
    } ;

    return 0;
}