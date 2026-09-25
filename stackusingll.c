#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top, *new;
void pop(){
    if(top==NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        struct node *t;
        t=top;
        top=top->next;
        free(t);
        t=NULL;
    }
}

void push(int x){
    new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=top;
    top=new;
}

void main(){
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
}

