#include <iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){

      int currElem=arr[i];
      int prevElem=i-1;
      while(prevElem >=0 && arr[prevElem]> currElem){
        arr[prevElem+1]=arr[prevElem];
        prevElem --;
      }
      arr[prevElem+1]=currElem;
    }

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
    InsertionSort(arr,n);
    printArr(arr,n);
    return 0;
}