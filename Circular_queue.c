#include <stdio.h>

int queue[100],f=-1,r=-1,i,n;

void enqueue(int elm){
   if (r==-1 && f==-1){
       r++;
       f++;
       queue[r]=elm;
       printf("Element queued successfully\n");
   }
   else {
       if (f==(r+1)%n){
           printf("Queue Overflow!\n");
       }
       else{
           r=(r+1)%n;
           queue[r]=elm;
           printf("Element queued successfully\n");
       }
   }
}

void dequeue(){
    if (f==-1 && r==-1){
        printf("Queue underflow!\n");
    }
    else{
        if (f==r){
            printf("The dequeued element is : %d\n",queue[f]);
            f=r=-1;}
        else{
            printf("The dequeued element is : %d\n",queue[f]);
            f=(f+1)%n;
        }
    }
}

void display(){
    if (f==-1 && r==-1){
        printf("Queue is empty!\n");
    }
    else{
        if (f==r)
            printf("%d\n",queue[f]);
        else{
            for (i=f;i<=r;i++){
                printf("%d\n",queue[i]);
            }
        }
    
    }
}

int main()
{
    int ch,elm;
    printf("Enter the size of queue(max 100):");
    scanf("%d",&n);
    do{
    printf("Enter your choice:\n1 for Enqueue\n2 for Dequeue\n3 for Display\n4 for Exit");
    scanf("%d",&ch);
    if (ch==1){
        printf("Enter the element to be queued");
        scanf("%d\n",&elm);
        enqueue(elm);
    }
    else if (ch==2){
        dequeue();
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
