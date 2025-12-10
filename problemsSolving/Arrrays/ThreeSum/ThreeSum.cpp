#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;


// brute force approach
vector<vector<int>>ThreeSumBrute(vector<int>& arr) {
    set<vector<int>>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==0){
                   vector<int>temp={arr[i],arr[j],arr[k]};
                   sort(temp.begin(),temp.end());

                   if(ans.find(temp)!=ans.end()){
                    ans.insert(temp);
                   }
                    
                }

            }
        }
    }
 return vector<vector<int>>(ans.begin(), ans.end());
}



//this is optimized approach but not he best
vector<vector<int>> ThreeSum(vector<int>& arr) {
    set<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++) {
        set<int> hash;
        for (int j = i + 1; j < arr.size(); j++) {
            
            int third = -(arr[i] + arr[j]);
            if (hash.count(third)) {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                ans.insert(temp);
            }

            hash.insert(arr[j]);
        }
    }

    return vector<vector<int>>(ans.begin(), ans.end());
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
     vector<vector<int>> ansBrute = ThreeSumBrute(arr);
     for(auto &triplet : ansBrute) {
        for(int x : triplet) {
            cout <<"This is BruteForce approach"<<  x << " ";
        }
        cout << endl;
    }

    return 0;
}
