#include <iostream>
#include <vector>
using namespace std;

void MooresAlgo(vector<int>& arr) {
    int Count = 0;
    int Candidate = 0;


    for (int i = 0; i < arr.size(); i++) {
        if (Count == 0) {
            Candidate = arr[i];
            Count = 1;
        } else if (arr[i] == Candidate) {
            Count++;
        } else {
            Count--;
            
        }
    }

    Count = 0;
    for (int num : arr) {
        if (num == Candidate) Count++;
    }

    if (Count >= arr.size() / 2)
        cout << "The majority element is: " << Candidate << endl;
    else
        cout << "No majority element found." << endl;
}

int main() {
    vector<int> arr = {1, 2, 2, 1, 1, 3, 2, 2};
    MooresAlgo(arr);
}
