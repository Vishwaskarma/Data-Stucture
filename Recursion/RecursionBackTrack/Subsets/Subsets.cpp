#include <iostream>
#include <vector>
using namespace std;


void getAllSubSets(vector<int>& arr, vector<int>& ans, int i, vector<vector<int>>& allSubSet) {
    if (i == arr.size()) {
        allSubSet.push_back(ans); 
        return;
    }
    

    ans.push_back(arr[i]);
    getAllSubSets(arr, ans, i + 1, allSubSet);
    
    // Backtrack: remove the element we just added
    ans.pop_back();
    
    // Exclude current element
    getAllSubSets(arr, ans, i + 1, allSubSet);
}


vector<vector<int>> subSets(vector<int>& arr) {
    vector<vector<int>> allSubSet;
    vector<int> ans;
    getAllSubSets(arr, ans, 0, allSubSet);
    return allSubSet;  
}


void printSubsets(const vector<vector<int>>& subsets) {
    cout << "All Subsets:\n";
    for (const auto& subset : subsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }
   
}

int main() {
    vector<int> arr = {1, 2, 3};
    
    vector<vector<int>> result = subSets(arr);
    
    printSubsets(result);
    
    return 0;
}