#include <vector>
#include <iostream>
using namespace std;

int threeSumClosest(vector<int> &arr, int target)
{
    int AfterCheckPush=0;
    int CurrentSum=0;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        CurrentSum+=arr[i];
        if(CurrentSum>target && CurrentSum<AfterCheckPush){
            return CurrentSum;
        }else if(CurrentSum<target && CurrentSum>AfterCheckPush){
            return CurrentSum;
        }
        else{
            AfterCheckPush=CurrentSum;


        }

       
    }
    return CurrentSum;
}

int main()
{
    vector<int> arr = {-1, 2, 1, -4};
    int target = 1;
    int closest = threeSumClosest(arr, target);
    cout<<closest<< endl;
    return 0;
}