#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void MajorityElemSort(vector<int>& arr) {
    int size = arr.size();
    if (size == 0) return;

    sort(arr.begin(), arr.end());

    int maxFreq = 1;
    int currFreq = 1;
    int ans = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currFreq++;
        } else {
            currFreq = 1;
        }


        if (currFreq > maxFreq) {
            maxFreq = currFreq;
            ans = arr[i];
        }
    }

    cout << "The majority element is: " << ans 
         << " with frequency: " << maxFreq << endl;
}

void MajorityElem(vector<int>& arr) {
    int size = arr.size();
    int majorityCount = size / 2;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > majorityCount) {
            cout << "The majority element is: " << arr[i]
                 << " with frequency: " << count << endl;
            return;
        }
    }
    cout << "No majority element found." << endl;
}

void MajorityMores(vector<int>& arr){
    int count=0;
    int candidate=0;
    for(int i=0;i<arr.size();i++){
        if(count==0){
            candidate=arr[i];

        }
        if(count==arr[i]){
            count=count+1;

        }
        else{
            count--;
        }
    }
    cout << "the majority elem is " << candidate ;

}
int main() {
    vector<int> arr = {1, 2, 2, 1, 1,2,2};

    cout << "// Using Brute Force Technique" << endl;
    MajorityElem(arr);

    cout << "// Using InBuilt Sorting Technique" << endl;
    MajorityElemSort(arr);

    cout << "//using Moores Algorithm Technique" << endl;
    MajorityMores(arr);

    return 0;
}
