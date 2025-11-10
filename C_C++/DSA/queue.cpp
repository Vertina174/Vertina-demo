#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int val){
    data=val;
    next=NULL;
}
};
class queue{
Node* head;
Node* tail;
public:
queue(){
    head=tail=NULL;
}

void push(int val){
    Node* newNode = new Node(val);
  
    newNode->next=head;
    head=newNode;
}
void pop(){
    if(head==NULL){
        cout<<"Queue is empty!!!\n";
        return;
    }
    if(head==tail)    delete head;
    
    Node* temp=head;
    head=head->next;
    delete temp;
}
void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};
int main()
{
    system("cls");
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    q.pop();
    q.display();
    return 0;
}