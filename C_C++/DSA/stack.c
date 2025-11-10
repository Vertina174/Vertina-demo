#include <stdio.h>
#include <stdlib.h>
struct stack{
int data;
struct Node* next;
};
struct list{
    struct stack* top;
    struct stack* tail;
};
void initial(struct list* l){
    l->top=NULL;
    l->tail=NULL;
}
void push(struct list* l,int val){
struct stack* newNode= malloc(sizeof(struct stack));
newNode->data=val;
newNode->next=NULL;

newNode->next=l->top;
l->top=newNode;
}
void pop(struct list* l){
    if(l->top==NULL){
        printf("stack is empty!!!\n");
        return;
    }
    struct stack* temp=l->top;
    l->top=l->top->next;
    temp=0;
    free(temp);
}
void display(struct list* l){
    struct stack* temp=l->top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main() {
    system("cls");
    struct stack ll;
    initial(&ll);

    push(&ll,1);
    push(&ll,2);
    push(&ll,3);
    push(&ll,4);
    
    display(&ll);
    pop(&ll);
    display(&ll);
    return 0;
}