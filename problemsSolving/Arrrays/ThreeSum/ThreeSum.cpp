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


vector<vector<int>>ThreeSumWithTwoPointerApproach(vector<int>& arr){
    vector<vector <int>>ans;

      sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(i>0 && arr[i]==arr[i-1])continue;
        int j=i+1;
        int k=arr.size()-1;


        while(j<k){
         
            int sum=arr[i]+arr[j]+arr[k];
            if(sum>0){
                k--;
            }else if(sum<0){
                j++;

            }else{

                ans.push_back({arr[i], arr[j], arr[k]});
                j++;k--;
                while(arr[j]==arr[j-1])j++;
            }

         
            
        }
        

    }
    return ans;
}







int main() {
    // vector<int> arr = {-1, 0, 1, 2, -1, -4};
      vector<int> arr = {-1,0,1,2,-1,-4};

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
    vector<vector<int>> ansTwoPointer=ThreeSumWithTwoPointerApproach(arr);
    for(auto &tri:ansTwoPointer){
        for(int x:tri)cout << x << " ";
    }

    return 0;
}
