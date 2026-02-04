#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool CheckPallindrome(string subPart){
    int st=0;
    int end=subPart.size()-1;
    while(st<=end){
        if(subPart[st++]!=subPart[end--])return false;

    }
    return true;

}

vector<string> LongestPallindromicStringSize(string str){
    vector<string>LongestPallindrome;
    int GlobalMaxSize=INT_MIN;
    
    for(int i=0;i<str.size()-1;i++){
        string strin=str.substr(0,i+1);
        if(CheckPallindrome(strin)){
            int strsize=strin.size();
            int GlobalMaxSize=max(GlobalMaxSize,strsize);
            if(GlobalMaxSize>strsize)LongestPallindrome.push_back(strin);
        }
             string newStr=str.substr(i+1);
             cout<< newStr << endl;
             LongestPallindrome.pop_back();
            CheckPallindrome(str.substr(i+1));

    }
   
   return LongestPallindrome;
}



int main(){
    string str="cbbd";
     vector<string>ans=LongestPallindromicStringSize(str);
     for(string x:ans)cout << x<< endl;
     return 0;
}