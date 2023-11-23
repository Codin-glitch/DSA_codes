#include <stdio.h>

int queue[100],f=-1,r=-1,i,n;

void enqueue(){
   if (r>=n-1){
       printf("Queue overflow!\n");
   }
   else{
       if (f==-1){
           f=0;
       }
       r++;
       printf("Enter element to be queued:\n");
       scanf("%d/n",&queue[r]);
       printf("Element added to the queue succesfully\n");
   }
}

void dequeue(){
    if (f==-1){
        printf("Queue underflow!\n");
    }
    else{
        printf("The dequeued element is : %d\n",queue[f]);
        f++;
        if (f>r){
            f=r=-1;
        }
    }
}

void display(){
    if (f==-1){
        printf("Queue is empty!\n");
    }
    else{
        for (i=f;i<=r;i++){
            printf("%d\n",queue[i]);
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
       enqueue();
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
