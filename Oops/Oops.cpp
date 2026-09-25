#include<iostream>
#include<vector>
using namespace std;



// classes and object

// class Teacher{
// private:
//     double salary;
    
// public:
// // constructor
// // Special method invoked automatically at the time of object creation.Used for initialisation
// // Same name as class name 
// // Constructor doesn't have a return type
// // Only called once (automatically),at object creation
// // Memory allocation happens when constructor is called


//     // Non parameterized constructor
//     // Teacher(){
//     //    department="Computer Science";
//     // }
     
//     // parameterize constructor
//     Teacher(string n,string d, string s,double sal){
//         name=n;
//         department=d;
//         subject=s;
//         salary=sal;

//     }
//     Teacher(Teacher &orgObj){
//         cout<<"here we are calling copy constructor";
//         this->name=orgObj.name;
//         this->department=orgObj.department;
//         this->subject=orgObj.subject;
//         this->salary=orgObj.salary;

//     }
//     void info(){
//         cout<<name <<endl;
//         cout<<department<<endl;
//         cout<<subject<<endl;
//         cout<<salary<<endl;
//     }



//     string name;
//     string department;
//     string subject;
 


//     void changeDepartment(string newDepartment){
//         department=newDepartment;
//     }
//     // setter
//     // setter function is used for setting values of private properties of an class
//     void setSalary(double s){
//         salary=s;

//     }
//     // getter
//     // getter function is used to return values of private propertiers and attributes
//     double getSalary(){
//         return salary;

//     }

// };


// int main(){
//     Teacher t1("Himanshu","Computer Science","Python",26000);
//     Teacher t2(t1);
//     t2.info();
//     // t1.info();
//     // t1.name="Himanshu";
//     // t1.department="computer Science";
//     // t1.subject="c++";
//     // // t1.salary=1000;
//     // cout<<t1.name <<endl;
//     //  cout<<t1.department <<endl;
//     // cout<<t1.subject<<endl;
//    //cout<<t1.salary <<endl;
   
//     return 0;

// }



// class Student{
//     public:
//     string name;
//     double* cgpaptr;
     
//     Student(string name,double cgpa){
//         this->name=name;
//         cgpaptr=new double;
//         *cgpaptr=cgpa;

//     }
//     // deep copy constructor
//     // Student(Student &orgObj){
      
//     //     this->name=orgObj.name;
//     //     cgpaptr=new double;
//     //     *cgpaptr=*orgObj.cgpaptr;

//     // }
//     ~Student(){
//         cout<<"My purpose is to clean garbage of memory";
//         delete cgpaptr;
        
//     }
//     void getInfo(){
//         cout << "name:"<<name << endl;
//         cout << "cgpa:"<<*cgpaptr << endl;
//     }

// };
// int main(){
//     Student s1("Himanshi",8.8);
//     // Student s2(s1); 
//     s1.getInfo();
//     // *(s2.cgpaptr)=9.2;
//     // s1.getInfo();
//     // s2.name="Himanshu";
//     // s2.getInfo();

//     return 0;
// }




//INHERITANCE

//Multiple inheritance
// class Person{
// public:
//     string name;
//     int age;

//     // Person(string name,int age){
//     //     this->name=name;
//     //     this->age=age;


//     // }
//     Person(){

//     }

// };
// class Student:public Person{
// public:
//       int rollno;

   


// };
// class GradStudent:public Student{
//     public:
//     string researcharea;
//        void getInfo(){
//         cout<< "name: " <<name << endl;
//         cout<< "age: " <<age << endl;
//         cout << "rollno: " << rollno << endl;
//         cout << "researcharea: " << researcharea << endl;
//       }

// };


// int main(){
//     GradStudent g1;
//     g1.name="Vishwas Vishwakarma";
//     g1.age=21;
//     g1.rollno=1234;
//     g1.researcharea="cartesian neural network";
//     g1.getInfo();

//     return 0;
// }



//Multilevel inheritance

// class Student{
// public:
//     string name;
//     double salary;
// };
// class Teacher{
// public:
// string subject;
// double salary;

// };
// class TA:public Student,public Teacher{



// };
// int main(){
//     TA t1;
//     t1.name="Himanshu";
//     t1.subject="Computer science";

//     cout<< t1.name << endl;
//     cout<< t1.subject << endl;

//     return 0;
// }



//hierarichical Inheritance
//  class Person{
// public:
//      string name;
//      int age;

//  };
//  class Student:public Person{
// public:
//       int rollno;

        
//  };
// class Teacher :public Person{
// public:
// string subject;


//  }



//hybrid inheritance




// polymorphism
// poly=multiple
//morphism=forms


// polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used
// Compile time polymorphsim
// Run time polymorphism



// class Student{
// public:
//    string name ;
//     Student(){
//         cout << "Non-parameterized Constructor";
//     }
//     Student(string name){
//         this->name=name;
//         cout<< "parameterized constructor";

//     }
// };
// int main(){
//     Student s1("Himanshu");

//     return 0;
// }




// class Print{
// public:
//      void show(int x){
//         cout<< "int: " << x << endl;
//      }
//      void show(char ch){
//         cout<< "char: " <<ch << endl;
//      }

// };
// int main(){
//     Print p1;
//     p1.show(101);
//     p1.show('&');
//     return 0;
// }




// runtime  polymorphism


// class Parent{
//     public:
//     void getInfo(){
//         cout <<"Parent class";
//     }
// };
// class Child:public Parent{
//     public:
//     void getInfo(){
//         cout <<"Child class";
//     }
// };

// int main(){
//     Child c1;
//     return 0;
// }



// run time polymorphism with virtual functions

// class Parent{
//     public:
//     void getInfo(){
//         cout <<"Parent class";
//     }
//     virtual void hello(){
//         cout <<"Vitual method called";
//     }
// };
// class Child:public Parent{
//     public:
//     void getInfo(){
//         cout <<"Child class";
//     }
//      void hello(){
//           cout <<"Vitual methods gets overide here method called";
//     }
// };

// int main(){
//     Child c1;
//     c1.hello();
//     return 0;
// }




// abstraction
//hiding all important information and showing only eccenciel things that matters with users only











// Encapsulation
// Encapsulation is wrapping up of data and member function in a single unit called encapsulation
//exp:hiding  an attributes and methods inside a single class calles encapsulation

// class account{
// private:
//     double balance;
//     string password;
// public:
//     string accountId;
//     string username;
    
// };

// int main(){
//     return 0;
// }




// abstraction

// class Shape{
//     virtual void draw()=0;//pure virtual function
// };
// class Circle:public Shape{
//     public:
//     void draw(){
//         cout<< "drawing circle" <<endl;
//     }
// };

// int main(){
//     Circle c1;
//     c1.draw();

//     return 0;

// }



// static keyword

// void func(){
//    static int x=0;
//     cout <<x <<endl;
//     x++;
// }
// int main(){
//     func();
//     func();
//     func();
//     return 0;
// }



// class A{
//     public:
//        int x;
//        void increm(){
//         x=x+1;
//        }
// };
// int main(){
//     A obj1;
//     obj1.x=0;
//     cout<< obj1.x <<endl;
//     return 0;
// }

// class ABC{
//     public:
//     ABC(){
//         cout<<"Construnctor"<<endl;
//     }
//     ~ABC(){
//         cout<<"destructor"<<endl;
//     }
// };
// int main(){
//    if(true){
//     static ABC obj;
//    }
//     return 0;
// }
