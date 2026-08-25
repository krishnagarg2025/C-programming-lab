#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head= NULL,*new= NULL,*temp=NULL;
    int ch,element;
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
    printf("Enter the element after which you want to insert new element in linklist:\n");
    scanf("%d",&element);
    printf("Enter the element to be inserted after %d of linklist\n", element);
    scanf("%d",&new->data);
    while(p->data!=element && p!=NULL){
        p=p->next;
    }
    new->next=p->next;
    p->next=new;

    p=head;
    printf("Linklist after insertion in between:\n");
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
    

    return 0;
}