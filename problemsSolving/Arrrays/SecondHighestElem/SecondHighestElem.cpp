#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//Bruteforce approach
int SecondHighestElem(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int secondGreatest;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 1; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
            {
                secondGreatest = arr[i];
            }
        }
    }
    return secondGreatest;
}



// int  SecondHighestElemWithSlidingWindow(vector<int> &arr)
// {
//     int secondHighest = 0;
//     int st=0;
//     int end=arr.size()-1;
//     int window=2;

//     while(st<end){
//         for(int i=1;i<=window;i++){
//             cout << arr[i] << endl;
//         }
//         window+=1;

//     }
//     return 1;

   
// }



//with two pointers 
int SecondHighestWithTwoPointers(vector<int>&arr){
    int st=0;
    int end=arr.size()-1;
    int SecondHighestElem;
    while(st<end){
        SecondHighestElem=min(arr[st],arr[end]);
        st++;
    }
    return SecondHighestElem;

}

int main()
{
    vector<int> arr = {1, 2, 3,8,9, 4, 5, 6,7};
    int ans = SecondHighestElem(arr);
    int ans2=SecondHighestWithTwoPointers(arr);
    // int ans3=SecondHighestElemWithSlidingWindow(arr);
    cout <<"With BruteForce : "<< ans << endl;
    cout <<"With two pointer approach : " << ans2 << endl;
    // cout <<"With Sliding window technique: " << ans3 << endl;

    return 0;
}