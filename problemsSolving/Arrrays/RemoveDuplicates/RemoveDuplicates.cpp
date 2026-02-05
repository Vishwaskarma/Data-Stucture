 #include<vector>
 #include<iostream>

 using namespace std;


int removeDuplicates(vector<int>& nums) {
       if(nums.size() == 0) return 0;
       int j=1;
       for(int i=1;i<nums.size();i++)
       if(nums[i]!=nums[i-1]) { j++;nums[j]=nums[i];}
       return j;
        
    }
 
 int main(){
    vector<int>nums= {1,1,2};
    int ans= removeDuplicates(nums);
    cout << ans <<endl;
    return 0;
 }
 
 
 