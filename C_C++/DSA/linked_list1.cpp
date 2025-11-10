#include<iostream>
#include<cstdlib>
using namespace std;
class Node {
    public:
int data;
Node* next;
Node(int val){
    data=val;
    next = NULL;
}
};
class list{
    Node* head;
    Node* tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;

    }
    
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }

    void pop_front(){
        if(head==NULL){
            cout<<"Linked list is empty!!!";
            return;
        }
        if(head==tail){
            delete head;
        }
        Node* temp = head;
        head=head->next;
        delete temp;
    }
    
    void pop_back(){
        if(head==NULL){
            cout<<"Linked list is empty!!!";
            return;
        }
        if(head==tail){
            delete head;
        }
        Node* temp=head;
        while(temp->next!=tail) temp=temp->next;
        delete tail;
        tail= temp;
        tail->next=NULL;
    }
    void insert(int val, int pos){
        if(pos<1){
            cout<<"Invalid Position!!!";
            return;
        }
        if(pos==1) push_front(val);
        Node* temp=head;
        for(int i=1 ; i<pos-1; i++) temp=temp->next;
        Node* newNode = new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void reverse(){
        Node* previous =NULL;
        Node* current=head;
        Node* next=NULL;
        while(current!=NULL){
            next=current->next;
            current->next=previous; 
            previous=current;
            current=next;
        }   
        head=previous; 
    }

    void middle(){
        if(head==NULL){
            cout<<"linked list is empty!!!";
            return;
        }
        if(head==tail){
            cout<<"Middle is "<<head->data;
            return;
        }
        Node* fast=head;
        Node* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<"Middle is "<<slow->data;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};

int main(){
    system("cls");
    list ll;
  ll.push_front(1);//  push front
  ll.push_front(2);
  ll.display();
  cout<<endl;
  ll.push_back(3); //push back
  ll.push_back(4);
  ll.display();
  cout<<endl;
  ll.pop_back();  //pop fornt
  ll.display();
  cout<<endl;
  ll.pop_front(); // pop back
 ll.display();  
 cout<<endl;
 ll.reverse(); // reverse
 ll.display(); 
 cout<<endl;
 ll.insert(5,2); // insert
 ll.display();
 cout<<endl;
 ll.display();
 cout<<endl;
 ll.middle();
 
    return 0;
}