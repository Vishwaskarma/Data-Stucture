#include<iostream>
using namespace std;


bool isValidPallindrome(string str){
    int st=0,end=str.length()-1;
    if(str.length()<2){return false;}
    while(st<end){
        if(!isalnum(str[st])){st++; continue;}
        if(!isalnum(str[end])){end--;continue;}
        if(str[st] != str[end]){return false;}
        if(str[st]==str[end]){st++;end--;}
    }
    return true;

}
int main(){
    string str="racecar";
    bool ans = isValidPallindrome(str);
    cout << ans << endl;
    return 0;

}