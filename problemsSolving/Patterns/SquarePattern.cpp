#include<iostream>
using namespace std;



void  SquarePattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            cout << "* " ;
        }
        cout << endl;
    }

}
void SquarePatternWithChar(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            cout << ch << " ";
            ch=ch+1;

        }
        cout << endl;

    }

}
void printingContinousNumberInSquareManner(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << num << "  ";
            num=num+1;

        }
        cout << endl;

    }

}

int main(){
    int n=4;
    SquarePattern(n);
    SquarePatternWithChar(n);
    printingContinousNumberInSquareManner(n);
    return 0;


}