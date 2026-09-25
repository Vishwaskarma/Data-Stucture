#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;

int ReverseNumber(int num){

    int ReversedNum=0;
    while(num!=0){
        int digit=num %10;
        if(ReversedNum > INT_MAX || ReversedNum < INT_MIN)return 0;
        ReversedNum=ReversedNum*10 + digit;
        num=num/10;
    
    }

    return ReversedNum;

}




//check palindrome in number
bool isPallindrome(int n){
    if(n<0)return false;
    int reverseNum=ReverseNumber(n);
    return n==reverseNum;
}
vector<int>ReverseArray(vector<int>arr){
    int st=0;
    int end=arr.size()-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    return arr;

    
}


int main(){
    int num=45672;
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    vector<int>arr2=ReverseArray(arr);
    // int ans=ReverseNumber(num);
    for(int x:arr2)cout << x ;
    // cout << ans << endl;
    return 0;
     
}