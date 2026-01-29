#include<iostream>
#include<vector>
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
    if(str.size()==0)return LongestPallindrome ;
    int LongestPallindromicString=0;
    for(int i=0;i<str.size()-1;i++){
    string subPart=str.substr(0,i+1);

    if(CheckPallindrome(subPart)){
    if (LongestPallindromicString<subPart.size()){
        LongestPallindromicString=subPart.size();
        LongestPallindrome.pop_back();
        LongestPallindrome.push_back(subPart);


    }

    
    LongestPallindromicStringSize(str.substr(0,i+1));

    }

}
return LongestPallindrome;

}



int main(){
    string str="babad";
     vector<string>ans=LongestPallindromicStringSize(str);
     for(string x:ans)cout << x<< endl;
     return 0;
}