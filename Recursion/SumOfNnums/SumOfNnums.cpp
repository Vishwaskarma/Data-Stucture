#include<iostream>
using namespace std;

int SumOfNnums(int n){
    if(n==0)return 0;
    return n+ SumOfNnums(n-1);
}

int main(){
    int n=5;
    cout << SumOfNnums(n)<< endl;
    return 0;
}