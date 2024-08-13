#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node* next;
};

void display(struct node* temp){
    if(temp == NULL) printf("\nLL is empty");
    while(temp != NULL){
        printf("%d ", temp->val);
        temp = temp->next;
    }
}

int main(){
    struct node* head = NULL;
    struct node* node1 = NULL;
    struct node* node2 = NULL;
    struct node* node3 = NULL;
    struct node* node4 = NULL;

    node1 = (struct node*) malloc(sizeof(struct node));
    node2 = (struct node*) malloc(sizeof(struct node));
    node3 = (struct node*) malloc(sizeof(struct node));
    node4 = (struct node*) malloc(sizeof(struct node));

    node1->val = 10;
    node1->next = node2;
    node2->val = 20;
    node2->next = node3;
    node3->val = 30;
    node3->next = node4;
    node4->val = 40;
    node4->next = NULL;
    display(node1);
}