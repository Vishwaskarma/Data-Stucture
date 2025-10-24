#include<iostream>
using namespace std;


void maximumSubArray(int arr[],int n){
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
           for(int i=st;i<=end;i++){
            cout << arr[i];
           }
           cout << " ";
        }
        cout << endl;
    }

}


int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    maximumSubArray(arr,n);
    return 0;
}