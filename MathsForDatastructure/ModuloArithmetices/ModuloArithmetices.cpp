#include<iostream>
#include<vector>
using namespace std;

void printPattern(){
    int counter=5;
    for(int i=5;i>=1;i--){

        for(int j=1;j<=counter;j++){
            cout << i ;
        }
        counter--;
        cout << endl;
    }

}


int main(){
    printPattern();
    return 0;

}
