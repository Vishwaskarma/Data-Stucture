#include<iostream>
#include<vector>
using namespace std;

int GreatestCommonDivisor(int a,int b){

    while(a > 0 && b > 0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0)return b;
    return a;


}

int LeastCommonMultiple(int a,int b){
    int gcd=GreatestCommonDivisor(a,b);
    return (a*b) /gcd;
}

int main(){
    // Euclid's Algorithms
    int a=20;
    int b=28;
    int LCM=LeastCommonMultiple(a,b);
    // int ans=GreatestCommonDivisor(a,b);
    // cout << ans << endl;
    cout << LCM << endl;
    return 0;
}