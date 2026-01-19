 #include<vector>
 #include<iostream>

 using namespace std;


 pair<vector<int>,int>removeDuplicates(vector<int>& nums) {
       
      int count=0;
      for(int i=0;i<nums.size()-1;i++){
        int st=i+1;
        int end=nums.size()-1;

        while(st<end){
            if(nums[i]==nums[end]){
                count+=1;
                nums.erase(nums.begin()+1);
                nums.push_back('_');
                end--;
            }
        }
      }
       return nums,count;
        
    }
 
 int main(){
    vector<int>nums= {1,1,2};
    pair<vector<int>,int>ans= removeDuplicates(nums);
   
   
    return 0;
 }
 
 
 