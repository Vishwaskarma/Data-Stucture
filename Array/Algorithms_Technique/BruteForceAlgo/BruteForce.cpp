#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

void  maximumSumofSubarray(int arr[],int n){
   int  maxSum=INT_MIN;
   int currentSum=0;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            currentSum+=arr[end];
            maxSum=max(currentSum,maxSum);

        }

    }
 cout << "the maximum sum of subarray = "<< maxSum << endl ;

}

void maximumSumofSubarrayKadane(std::vector<int> arr)
{
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int element : arr)
    {
        currentSum += element;
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "The Maximum Positive Number is = " << maxSum <<endl;
}

int main()
{
    int n = 2;
    int arr[] = {3, -2, -1, -42, 10, -7, 88};
    // find maximum subarray sum using brute force algorithms
    maximumSumofSubarray(arr,n);
    // find maximum subarray sum using kadane's  algorithms
    int m = 2;
    std::vector<int> arr1 = {3, -2, 1, -4, 5, -7, 8};
     std::vector<int> arr2 = {-2,1,-3,4,-1,2,1,-5,4};
    
    maximumSumofSubarrayKadane(arr2);
    return 0;
}