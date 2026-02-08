#include<string>
#include<iostream>
using namespace std;

int ReturnLastWordLen(string s){
    int l=0;
    int idx=s.size()-1;
    while(s[idx]==' ')idx--;
    for(int i=idx;i>=0;i--){

        if(s[i]==' '){ 
          break;
        }else{
        l++;}
    }
    return l;
}
int main(){
    string s="Hello World";
    int ans=ReturnLastWordLen(s);
    cout<<ans<<endl;
    return 0;
}