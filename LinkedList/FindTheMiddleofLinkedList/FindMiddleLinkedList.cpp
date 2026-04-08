#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
};


ListNode* returnMiddleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


void insert(ListNode*& head, int value) {
    ListNode* newNode = new ListNode();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

int main() {
    ListNode* head = NULL;

    insert(head, 50);
    insert(head, 40);
    insert(head, 30);
    insert(head, 20);
    insert(head, 10);
   

    ListNode* mid = returnMiddleNode(head);
    cout << "Middle node: " << mid->data << endl;  

    return 0;
}