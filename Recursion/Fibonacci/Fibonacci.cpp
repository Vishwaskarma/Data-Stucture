#include<iostream>
#include<vector>
using namespace std;



int Fibonacci(int n){
    if(n==1 || n==0){return n;};
    return  Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    int n=5;
    cout<< Fibonacci(n);

    return 0;
}         