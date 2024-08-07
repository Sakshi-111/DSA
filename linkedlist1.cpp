#include <iostream>
using namespace std;
#include<vector>
class node{
    public:
    int data;
    node*ptr;
    // constructor
    node(int data1){
        this->data=data1;
        this->ptr=NULL;

    }
    
};
void  INSERTAthead(node * &head, int d){
    node * temp= new node(d);
    temp->ptr=head;
    head=temp;
    
    
    
}
void insertatTail(node *&tail,int d){
    node * temp= new node(d);
    tail->ptr=temp;
    tail=temp;


}
void insertAtMiddle(node *&head,node*&tail,int pos,int d){
   //inserting at start
    if(pos==1){
        INSERTAthead(head,d);
        return;
    }
//pointer to head for traversal
    node *temp=head;
    int cnt=1;
    
    while(cnt<pos-1){
        temp=temp->ptr;
        cnt++;
    }
    if(temp->ptr=NULL){
        insertatTail(tail,d);
        return;
    }
    node*nodeToInsert=new node(d);
    nodeToInsert->ptr=temp->ptr;
    temp->ptr=nodeToInsert;
}

void printnode(node * &head){
    node *temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        
        temp=temp->ptr;

    }

}
// void deletenode(node* &head ,int pos){
//     node*temp= head;
//     if(pos==1){
       
//        head= head->ptr;
//        free(temp);
//        
//     }
    
    
    
   
//     int cnt =1;
//     while(cnt<pos-1){
//         temp=temp->ptr;
//         cnt++;
//     }
//     node *curr=NULL ;
//     curr=temp->ptr;
//     temp->ptr=curr->ptr;
//     delete curr;
    

// }
void deletenode(node* &head,int pos){
    node*curr=head;
    node *prev=NULL;
    
    if(pos==1){
        node*temp=head;
        head=head->ptr;
        temp->ptr=NULL;
        delete temp;



    }
    int cnt=1;
    while(cnt<pos){
        prev=curr;
        curr=curr->ptr;
         cnt++;
    }
    if(curr->ptr==NULL){
        prev->ptr=NULL;
      node* tail=prev;

    }
    
    prev->ptr=curr->ptr;
    curr->ptr=NULL; 
    delete curr;
    
    
}
// void deletenode(node* &head, int pos) {
//     if (pos < 1 || head == NULL) {
//         // Invalid position or empty list
//         return;
//     }
    
//     node* curr = head;
    
//     if (pos == 1) {
//         head = head->ptr;
//         delete curr;
//         return;
//     }
    
//     node* prev = NULL;
//     int cnt = 1;
    
//     while (cnt < pos && curr != NULL) {
//         prev = curr;
//         curr = curr->ptr;
//         cnt++;
//     }
    
//     if (curr == NULL) {
//         // Position is greater than the number of nodes
//         return;
//     }
    
//     prev->ptr = curr->ptr;
//     delete curr;
// }






int main(){


node *node1=new node(20);



// cout<<node1->ptr<<endl;
// cout<<node1->data<<endl;
node *head=node1;
node *tail=node1;
cout<<endl;
printnode(head);
// printnode(head);
// INSERTAthead(head,12);
// INSERTAthead(head,15);
// printnode(head);
cout<<endl;
insertatTail(tail,12);
printnode(head);
cout<<endl;
insertatTail(tail,15);
printnode(head);
cout<<endl;

insertAtMiddle(head,tail,1,7);
printnode(head);
cout<<endl;
cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;

deletenode(head,3);
printnode(head);
cout<<tail;






}




