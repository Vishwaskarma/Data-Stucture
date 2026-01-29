#include<iostream>
#include<vector>
using namespace std;

void printPattern(){
    int counter;
    cout << "Enter the number of rows ";
    cin >> counter;
   
    for(int i=counter;i>=1;i--){

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
