#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
void UpdateNode(Node* head,int oldValue,int newValue){
    Node* current=head;
    while(current!=NULL){
       if(current->data==oldValue) { 
        current->data=newValue;
        return;
    }
    current=current->next;
    }

}
void InsertAtFrontNode(Node*& head,int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;

}
void PrintList(Node* head){
    Node* current=head;
    while(current!=NULL){
        cout<<" "<<current->data<<endl;
        current=current->next;
    }
}

void DeleteNode(Node*& head, int value) {  
    if (head == NULL) return;  

   
    if (head->data == value) {  
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    
    Node* currentsec = head;
    Node* prev = NULL;  

    while (currentsec != NULL) {
        if (currentsec->data == value) { 
            prev->next = currentsec->next; 
            delete currentsec;
            return;  
        }
        prev = currentsec;
        currentsec = currentsec->next;
    }

    cout << "Value not found!" << endl;
}

int main(){
    Node* head=NULL;

    
    
    InsertAtFrontNode(head,10);
    InsertAtFrontNode(head,20);
    InsertAtFrontNode(head,30);
    InsertAtFrontNode(head,40);
    InsertAtFrontNode(head,50);
    
    UpdateNode(head,20,900);
    DeleteNode(head,900);

    PrintList(head);



    return 0;
}