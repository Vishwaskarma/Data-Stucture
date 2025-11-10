#include<iostream>
#include<vector>
#include<string>
using namespace std;

int ReverseNumber(int num){

    int ReversedNum=0;
    while(num!=0){
        int digit=num %10;
        ReversedNum=ReversedNum*10 + digit;
        num=num/10;


    }
    return ReversedNum;

}


int main(){
    int num=45672;
    int ans=ReverseNumber(num);
    cout << ans << endl;
    return 0;
     
}