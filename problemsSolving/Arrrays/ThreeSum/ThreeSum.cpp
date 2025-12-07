#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> ThreeSum(vector<int>& arr) {
    vector<vector<int>> ans;

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            for(int k = j + 1; k < arr.size(); k++) {

                if(arr[i] + arr[j] + arr[k] == 0) {
                    ans.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }

    return ans;
}


int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = ThreeSum(arr);

    for(auto &triplet : ans) {
        for(int x : triplet) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
