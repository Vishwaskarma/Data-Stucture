#include<iostream>
#include<vector>
#include<cmath>
using namespace  std;

void FindRangeOfPrime(int start,int end){
    vector<int>arr={};
    for(int num=start;num<=end;num++){
        if(num<=2)continue;
        bool isPrime=true;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                isPrime=false;
                break;
            }

        }
        if(isPrime){
            arr.push_back(num);

        }
    }
    
    for(int p:arr){
        cout << p <<endl;
    }
}

int main(){
    int start=2;
    int end=100;
    FindRangeOfPrime(start,end);
     return 0;

}