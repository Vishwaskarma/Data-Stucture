#include<iostream>
using namespace std;


void trianglePattern(int n){
    for(int i=1;i<=n;i++){
      for(int j=0;j<n-i;j++){
        cout << "* " << " ";
      }
      cout << endl;

    }

}
void rightAngleTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "* " << " ";

        }
        cout << endl;

    }

}
void samenumberPrintingOnEachIteration(int n){
    int num=0;
    for(int i=0;i<n;i++){
        num=num+1;
        for(int j=0;j<i+1;j++){
            cout << num << " ";
        }
    
        cout << endl;
    }
}
//pavan logic

// void samenumberPrintingOnEachIteration(int n){
//     for(int i=0;i<n;i++){
        
//         for(int j=0;j<i+1;j++){
//             cout << i+1 << " ";
            
//         }
//         cout << endl;

//     }
// }
void completenumPrintOnEveryIteration(int n){
    for(int i=0;i<n;i++){
        int num=1;
        for(int j=0;j<i+1;j++){
            cout << num << " ";
            num++;

        }
        cout << endl;


    }

}
void reverseNumPrintingonEachIteration(int n){
   for(int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){
        cout << j <<" ";

    }
    cout << endl;

   }

}

void flyodTrianglePattern(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << num << " ";
            num=num+1;

        }
        cout << endl;

    }

}



int main(){
    int n=5;
    trianglePattern(n);
    rightAngleTriangle(n);
    samenumberPrintingOnEachIteration(n);
    completenumPrintOnEveryIteration(n);
    reverseNumPrintingonEachIteration(n);
    flyodTrianglePattern(n);

    

    return 0;
}