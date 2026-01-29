#include <iostream>
using namespace std;


void MergeSort(){
    
}





void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
            cout <<arr[i] << " ";
    }
   cout << endl;
}

int main(){
     int n=5;
    int arr[]={4,1,5,2,3};
    MergeSort(arr,n);
    printArr(arr,n);
    return 0;
}