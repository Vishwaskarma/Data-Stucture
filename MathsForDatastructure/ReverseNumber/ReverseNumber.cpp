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


int main(){
    int num=45672;
    int ans=ReverseNumber(num);
    cout << ans << endl;
    return 0;
     
}