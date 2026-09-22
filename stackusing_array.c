#include <stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int x){
    if(top==size-1){
        printf("Stack overflow\n");
    }
    else{
        top=top+1;
        stack[top]= x;
    }
}

int pop(){
    if(top==-1){
        printf("Stack underflow\n");
    }
    else{
        printf("Deleted element is %d\n",stack[top]);
        top=top-1;
    }
}

int peek(){
    if(top==-1){
        printf("Isempty\n");
    }
    else{
        printf("%d\n",stack[top]);
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    peek();
    pop();
    pop();
    pop();
    push(55);
    peek();
    pop();
    peek();
    return 0;
}