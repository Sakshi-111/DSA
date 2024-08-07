#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;
     
     node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

     }
};

void printnode(node *&head){
     node*temp=head;
     while(temp!=NULL){
          cout<<temp->data<<" ";
          temp=temp->next;

     }
}
// int getlength(node*&head){
//      node* temp=head;
//      int cnt=0;
//      while(temp!=NULL){
//           cnt++;
//           temp=temp->next;
//      }
//      return cnt;
// }
void insertnode(node*&head,int d){
     node *temp=new node(d);
     temp->next=head;
     head->prev=temp;
     head=temp;

}

int main(){
     node*node1=new node(10);
     node*head=node1;
     // printnode(head);
//    cout<<  getlength(head);
   insertnode(head,20);
   printnode(head);
}
