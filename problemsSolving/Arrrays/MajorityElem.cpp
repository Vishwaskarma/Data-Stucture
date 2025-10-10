#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void MajorityElem(vector<int>& arr){  
   int size=arr.size();
    for(int val : arr){  
      int freq=0;

          for(int el:arr){
            if(val==el){
               freq=freq+1;
            }
          }
          if(freq >size/2){
            cout << "The majority Elem is: "<< val ;
          }
    }
}
void MajorityElemSort(vector<int>& arr){
   int size=arr.size();
   int frequency=0;
   std::sort(arr.begin(),arr.end());
   for(int i=0;i<size;i++){
      if(arr[i]==arr[0]){
         frequency=frequency+1;

      }
      else{
         frequency=0;
      }

   }
   cout <<"The frequency of elem is:";

   

}

int main(){

   // using BruteForce Algo Technique
    vector<int> arr = {1,2,2,1,1};   
    MajorityElem(arr);  
   // using InBuilt Sorting Technique
   MajorityElemSort(arr);         
    return 0;
}