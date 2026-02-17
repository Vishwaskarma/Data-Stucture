#include<iostream>
using namespace std;




int main(){
    // cout << Pointer is Special types of varaibles that stores address of other  variables

  int **prt;
   cout << "The value of null pointer is " << prt <<endl;

    int a=5;
    cout <<"Printing the memory address of varaible a is " << &a << endl;
    int* ptr_fun=nullptr;
    int* pointerOne=&a;
    cout << "This is stores memory address of int a " << *pointerOne << endl;
    int** pointersof_pointer=&pointerOne;
    cout <<"This is memory address of your pointer one which is storing the memory address of another pointer "<<  *pointerOne << endl;
    cout << "This is null pointer " << ptr_fun << endl;

    // Derefrence operator
    int b=10;
    int* ptr3=&b;
    int** ptr4=&ptr3; 
    cout << "This is memory address of ptr4" << ptr4 << endl;
    cout <<"This will print the value at address of ptr4 is " << *(ptr4) << endl;
    cout << **(ptr4) << endl;
    cout << "The value of pointer ptr3 is " << (ptr3) << endl;;

    // predict output
    int c=5;
    int *p=&c;
    int **q=&p;
    cout <<"The value at address of pointer p is " << *p << endl;
     
    // Array pointer 
    int arr[]={1,2,3,4,5};
    int d=24;
    // this is not acceptable 
    // arr=&d;

    cout << *arr <<endl;

    //pointer arithmetic
    int e=10;
    int* pl=&e;



    return 0;

}


