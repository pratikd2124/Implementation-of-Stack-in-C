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
    if (top==MAX-1){
        printf("Stack full");
    }
    else {
        top=top+1;
        stack[top]=item;
    }
}
int pop(){
    if(top==-1){
        printf("Stack empty");
    }
    else{
        stack[top];
        top=top-1;
    }
    return stack[top];
}
int peek(){
    item=stack[top];
    return item;
}
void display(){
    int i;
	
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nElement in Stack are:\n");
		for(i=top;i>=0;--i)
			printf("%d\t",stack[i]);
	}
}
void main(){
    int choice;
    void push(int);
    int pop();
    int peek();
    void display();
    while(1){
        printf("1.Push \n2.Pop \n3.Peek \n4.Display \n5.exit\n");
        printf("Enter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nInsert an element into stack:");
            scanf("%d",&item);
            push(item);
            break;
        case 2:
            pop();
            printf("Deleted element in stack is %d");
            break;
        case 3:
            printf("topmost element:",peek());
            break;
        case 4:
            printf("Elements present in stack are:\n");
            display();          
            break;
        case 5:
            exit(0);
        default:
            printf("Choose correct option");
            break;
        }
    }

}
