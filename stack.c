#include<stdlib.h>
#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int item;
void push(int);
int pop();
int peek();
void display();
void push(int item){
    if (top=MAX-1){
        printf("Stack full");
    }
    else {
        top++;
        stack[top]=item;
    }
}
int pop(){
    if(top=-1){
        printf("Stack empty");
    }
    else{
        item=stack[top];
        top-=1;
    }
    return item;
}
int peek(){
    item=stack[top];
    return item;
}
void display(){
    int i;
    for(i=0;i<=top;i++){
        printf("%d/t",stack[i]);
    }
}
void main(){
    int choice;
   void push(int);
    int pop();
    int peek();
    void display();
    while(1){

    }

}