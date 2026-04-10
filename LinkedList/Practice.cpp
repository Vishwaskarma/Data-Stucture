#include<iostream>
using namespace std;

struct LinkNode{
    int data;
    LinkNode* next;
};
void UpdateNode(LinkNode*& head,int oldvalue,int newValue){
    LinkNode* Current=head;
    while(Current!=NULL){
        if(Current->data==oldvalue){
            Current->data=newValue;
          
            return;
        }
        Current=Current->next;
    }
}

void InsertNode(LinkNode*& head,int value){
    LinkNode* newNode=new LinkNode();
    newNode->data=value;
    newNode->next=head;
    head=newNode;


}

void IterateOverLinkedList(LinkNode*head){
   LinkNode* current=head;
   while(current!=NULL){
    cout<< current->data<<endl;
    cout<<current->next<<endl;
    current=current->next;
   }

}
void DeleteNode(LinkNode*head,int val){
    LinkNode* current=head;
    LinkNode* prev=NULL;

    while(current!=NULL){
        if(current->data==val){
            prev->next=current->next;
            delete current;
            return;
        }
    }
    prev=current;
    current=current->next;

};

int main(){
    LinkNode* head=NULL;
    InsertNode(head,10);
    InsertNode(head,20);
    InsertNode(head,30);
    InsertNode(head,40);
    InsertNode(head,50);

    UpdateNode(head,40,400);

    DeleteNode(head,20);
    IterateOverLinkedList(head);
    return 0;
}



// #include<iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;
// };


// Node* getNode(int data){
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = NULL;
// } 



//  Node* head = NULL;


// int main(){
//     return 0;


    
//     while (true)
//     {
//         printf("[1] Create A defined size ll ");
//         printf("[2] Insert node at top ");
//         printf("[3] Insert node at last ");
//         printf("[4] Insert node at given position ");
//         printf("[5] Delete node from first  ");
//         printf("[6] Delete node from last  ");
//         printf("[7] Delete node at given position  ");
//         printf("[8] Display Linked List  ");
//         printf("[00] Exit  ");
//         int ch = scanf("%d",ch);

//         switch (ch)
//         {
//         case 1:
//             createDefinedList();
//             break;
//         case 2:
//             insertAtTop();
//             break;
//         case 3:
//             insertAtLast();
//         case 4:
//             insertAtGivenPosition();
//             break;
//         case 5:
//             deleteNodeAtFirst();
//             break;
//         case 6:
//             deleteNodeAtLast();
//             break;
//         case 7:
//             deleteNodeAtGivenPos();
//             break;
//         case 8:
//              displayNodes();
//              break;
//         case 00:
//             exit(0);
//         default:
//             break;
//         }
//         printf("Press any key to continue...");
//         getchar();

//     }

// }


// void createDefinedList(){

//     int val= 0;
//     printf("Enter how many node do you want to insert: ");
//     scanf("%d",val);
//     for (int  i = 0; i < val; i++)
//     {
        
//         printf("Enter the data of the value of %d ",i);
//         int data = 0;
//         scanf("%d",data);
//         Node* newNode = getNode(data);

//         if (head == NULL)
//         {
//             head->next = newNode;
//         }else{

//             Node* temp = head;

//             while (temp->next != NULL)
//             {
//                 temp = temp->next;
//             }

//             temp->next = newNode;
            
//         }
        

//     }
    


// }




// void deleteNodeAtGivenPos(){

//     printf("Enter the pos to remove the node : ");
//     int pos = 0;
//     scanf("%d",pos);

//     Node* temp = head;
//     Node* prev = NULL;

//     while (temp->next != NULL && pos == 1)
//     {
//         pos--;
//         prev = temp;
//         temp = temp->next;
//     }

//     prev->next = temp->next;
//     temp->next = NULL;

//     return te


    


// }