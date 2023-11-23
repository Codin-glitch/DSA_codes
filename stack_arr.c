#include <stdio.h>

int stack[100],top,ch,n,elm,i;
void push(void);
void pop(void);
void display(void);

int main()
{
    
    top=-1;
    printf("Enter the size of stack(max 100):");
    scanf("%d",&n);
    do{
    printf("Enter your choice:\n1 for Push\n2 for Pop\n3 for Display\n4 for Exit");
    scanf("%d",&ch);
    if (ch==1){
       push();
    }
    else if (ch==2){
        pop();
    }
    else if (ch==3){
        display();
    }
    else if (ch==4){
        printf("Exiting loop");
    }
    else{
        printf("Enter a valid choice please!");
    }

    }while(ch!=4);
    return 0;
}

void push(){
    if (top>=n-1){
        printf("Stack overflow!");
    }
    else{
    printf("Enter the element: ");
    scanf("%d",&elm);
    top++;
    stack[top]=elm;
    printf("Element successfully pushed into the stack");
    }
}

void pop(){
    if (top<=-1){
        printf("Stack underflow!");
    }
    else{
    elm=stack[top];
    top--;
    printf("Element %d successfully popped from the stack",elm);
    }
}

void display(){
    if (top>=0){
        for (i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    }
    else{
        printf("Stack is empty");
    }
}
