#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
int data;
Node* next;
Node(int val){
    data= val;
    next=NULL;
}
};
class list{
Node* head;
Node* tail;
public:
list(){ head=tail=NULL; }
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
     newNode->next=NULL;
     tail=newNode;
     }   
    
    void insert(int val, int pos){
        
        if(pos<1)
        {
            cout<<"Invalid Position";
            return;
        }
        if(pos==1){
            push_front(val);
        }
        Node* temp=head;
        for(int i=1; i<pos-1;i++){
            if(temp==NULL){
                cout<<"Invalid Position!!!";
                return;
            }
            temp=temp->next;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    
    void search(int val){
        int count=1;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==val ){
                cout<<"Found a Match at "<<count<<"th Index";
                return;
            }
            
            temp=temp->next;
            count++;
        }
        cout<<"Didn't Find a Match!!!";
    }
    void reverse(){
        Node* current=head;
        Node* next=NULL;
        Node* previous=NULL;
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
            cout<<"linked list is empty";
            return;
        }
        
        Node* fast=head;
        Node* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        cout<<slow->data;
    }
    bool cycle(){
        Node* fast=head;
        Node* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                cout<<"cycle found!!!";
                return false;
            }
            cout<<"linked list is linear.";
            return true;
        }

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
int main()
{
    system("cls");
    list ll;
   ll.push_back(1);
   ll.push_back(2);
   ll.push_back(3);
   ll.push_back(4);
   ll.push_back(5);
   ll.push_back(6);
   ll.reverse();
   ll.display();
   cout<<endl;
   
   
   ll.display();

    return 0;
}