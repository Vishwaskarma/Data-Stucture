#include<iostream>

struct ListNode{
    int data;
    ListNode* next;
    
};

void InsertNode(ListNode*& head,int value){
    ListNode* newNode=new ListNode();
    newNode->data=value;
    newNode->next=head;
    head=newNode;

}

int main(){
    ListNode* head=NULL;
    InsertNode(head,10);
    return 0;
}