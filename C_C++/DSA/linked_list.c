#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
struct list{
    struct Node* head;
    struct Node* tail;
};
    void initial(struct list* l){
        l->head=l->tail=NULL;
    }
    void push_back(struct list* l, int val){
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->data=val;
        newNode->next=NULL;
        if(l->head==NULL){
            l->head=l->tail=newNode;
            return;
        }
        newNode->next=l->head;
        l->head=newNode;
    }
    void push_front(struct list* l,int val){
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->data=val;
        newNode->next=NULL;
        if(l->head==NULL){
            l->head=l->tail=newNode;
            return;
        }
        l->tail->next=newNode;
        l->tail=newNode;
        l->tail->next=NULL;
    }
    void pop_front(struct list* l){
        if(l->head==NULL){
            printf("Linked list is empty!!!");
            return;}
           if(l->head==l->tail){
                free(l->head);
            }
            struct Node* temp=l->head;
            l->head=l->head->next;
            free(temp);
        }
        void pop_back(struct list* l){
            if(l->head==NULL){
                printf("linked list is empty!!!");
                return;
            }
            if(l->head==l->tail)
            {
                free(l->head);
            }
            struct Node* temp=l->head;
            while(temp->next->next!=NULL) temp=temp->next;
           free(l->tail);
           l->tail=temp;
           l->tail->next=NULL;
        }
    
void display(struct list* l){
    struct Node* temp=l->head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}


int main()
{
    system("cls");
 struct list ll;
initial(&ll);
push_back(&ll, 1);
push_back(&ll, 2);
push_back(&ll, 3);
display(&ll);
printf("\n");
push_front(&ll,6);
display(&ll);
printf("\n");
pop_front(&ll);
display(&ll);
printf("\n");
pop_back(&ll);
display(&ll);
    return 0;
}