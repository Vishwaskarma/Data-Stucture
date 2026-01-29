#include<iostream>
#include<vector>
using namespace std;

 void printDigits(int Digits){
    int count=0;
    int sum=0;

    while(Digits !=0){
        int digits=Digits%10;
        //this will print count
        count+=1;
        //this will print sum
        sum+=digits;
        Digits=Digits/10;



    }
    cout << count << endl;
        
    cout << sum << endl;


 }
int main(){
    int digits=3568;
    printDigits(digits);
    cout << endl;
    return 0;

}