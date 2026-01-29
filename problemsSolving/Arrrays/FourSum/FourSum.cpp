#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;




// Two Pointer Approach
vector<vector<int>>FourSumTwoPointer(vector<int> & arr,int target){
        int n = arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());

        for(int i=0;i<n-3;i++){
            if(i>0 && arr[i]==arr[i-1])continue;
            for(int j=i+1;j<n-2;j++){
                 if(j > i + 1 && arr[j] == arr[j - 1]) continue;
                int p=j+1;
                int q=n-1;
                while(p<q){
               long long sum = 1LL*arr[i] + arr[j] + arr[p] + arr[q];
               if(sum>target){
                    q--;
                }else if(sum<target){
                    p++;
                }
                else{
                    ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                    p++;
                    q--;
                    while(p<q && arr[p]==arr[p-1])p++;
                }

            }
            }

        }
        return ans;

}










//Bruteforce Approach Four sum 
set<vector<int>> FourSum(vector<int>& arr, int target) {
    int n = arr.size();
    set<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                for (int l = k + 1; l < n; l++) {

                    int sum = arr[i] + arr[j] + arr[k] + arr[l];

                    if (sum == target) {
                        vector<int> curr = {
                            arr[i], arr[j], arr[k], arr[l]
                        };
                        ans.insert(curr);   
                    }
                }
            }
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;

    set<vector<int>> ans = FourSum(arr, target);

    for (auto &t : ans) {
        for (int x : t) cout << x << " ";
        cout << endl;
    }
    
    
    
    vector<vector<int>> ans2 = FourSumTwoPointer(arr, target);
for (vector<int> x : ans2) {
    for (int val : x) {
        cout << val << " ";
    }
    cout << endl;
}

// for(auto &h :ans2){
//     for(int x :h)cout <<"Two pointer approach: "<<" " << x << " ";
// }
    
    return 0;



}
