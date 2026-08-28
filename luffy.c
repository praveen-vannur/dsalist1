#include<stdio.h>
#include<stdlib>
struct node {
int data;
struct node *next;
};
int main(){
struct node *head = NULL;
struct node *a = malloc(sizeof(struct node));
struct node *b = malloc(sizeof(struct node));
struct node *c = malloc(sizeof(struct node));
a->data = 10;
b->data = 20;
c->data = 30;
a->next = b;
b->next = c;
c->next = NULL;
head = a;

struct node *temp = head;
while(temp != NULL){
printf("%d", temp->data);
temp = temp->next;}
}
