#include<iostream>
#include<vector>
using namespace std;



// classes and object

class Teacher{
private:
    double salary;
    
public:
// constructor
// Special method invoked automatically at the time of object creation.Used for initialisation
// Same name as class name 
// Constructor doesn't have a return type
// Only called once (automatically),at object creation
// Memory allocation happens when constructor is called


    // Non parameterized constructor
    // Teacher(){
    //    department="Computer Science";
    // }
     
    // parameterize constructor
    Teacher(string n,string d, string s,double sal){
        name=n;
        department=d;
        subject=s;
        salary=sal;

    }
    void info(){
        cout<<name <<endl;
        cout<<department<<endl;
        cout<<subject<<endl;
        cout<<salary<<endl;
    }



    string name;
    string department;
    string subject;
 


    void changeDepartment(string newDepartment){
        department=newDepartment;
    }
    // setter
    // setter function is used for setting values of private properties of an class
    void setSalary(double s){
        salary=s;

    }
    // getter
    // getter function is used to return values of private propertiers and attributes
    double getSalary(){
        return salary;

    }

};


int main(){
    Teacher t1("Himanshu","Computer Science","Python",26000);
    t1.info();
    // t1.name="Himanshu";
    // t1.department="computer Science";
    // t1.subject="c++";
    // // t1.salary=1000;
    // cout<<t1.name <<endl;
    //  cout<<t1.department <<endl;
    // cout<<t1.subject<<endl;
   //cout<<t1.salary <<endl;
   
    return 0;

}


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