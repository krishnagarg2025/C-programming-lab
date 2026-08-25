#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head= NULL,*new= NULL,*temp=NULL;
    int ch;
    do{
        new= malloc(sizeof(struct node*));
        printf("Enter the element to be inserted in linklist\n");
        scanf("%d",&new->data);
        new->next = NULL;
        if(head==NULL){
            head= new;
            temp= new;
        }
        else{
            temp->next= new;
            temp=temp->next;
        }
        printf("Do you want to add more data, enter 1, enter 0 to stop\n");
        scanf("%d",&ch);
    } while (ch==1);
    struct node *p;
    p=head;
    printf("Given linklist is:\n");
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }

    p= head;
    new= malloc(sizeof(struct node*));
    printf("Enter the element to be inserted at start of linklist\n");
    scanf("%d",&new->data);
    new->next=NULL;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=new;

    p=head;
    printf("Linklist after insertion at last:\n");
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
    


    return 0;
}