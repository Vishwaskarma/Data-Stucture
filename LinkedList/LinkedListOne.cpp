#include<iostream>
#include<vector>
using namespace std;
// essentital functions for linkedlist
// 1->push_front();
// 2->pop_front();
// 3->push_back();
// 4->pop_back();

class  Node{
    public:
       int data;
       Node* next;
       Node(int val){
            data=val;
            next=NULL;

        }

};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }

    } 
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }

    }
    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty\n";
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
    }
    void pop_back(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return;
        }
        Node* temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<< " ";
            temp=temp->next;
        }
        cout<<endl;

    }
  
};  
int main(){
   List l1;
   l1.push_front(1);
   l1.push_front(2);
   l1.push_front(3);
   l1.push_back(4);
   l1.pop_front();
   l1.printLL();
    return 0;
}

  

 


