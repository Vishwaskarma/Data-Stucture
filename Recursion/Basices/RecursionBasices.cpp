#include<iostream>
#include<vector>
using namespace std;

void PrintTillHundread(int st){

    if(st>=100){

        return;
    }
   cout << st << endl;
    return PrintTillHundread(st+1);
}
int main(){
    int st=1;
    PrintTillHundread(st);
   
    return 0;
}