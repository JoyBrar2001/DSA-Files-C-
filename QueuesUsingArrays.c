#include <stdio.h>
#define n 5

int queue_arr[n];
int front = -1;
int rear = -1;

void enqueue(){
    if(rear == n-1){
        printf("Queue Overflow!\n");
    }
    else if(front == -1 && rear == -1){
        printf("Enter data : ");
        int data; scanf("%d" , &data);
        front = rear = 0;
        queue_arr[rear] = data;
        printf("%d has been added.\n", data);
    }
    else{
        printf("Enter data : ");
        int data; scanf("%d" , &data);
        rear++;
        queue_arr[rear] = data;
        printf("%d has been added.\n", data);
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue Underflow.\n");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("%d has been removed.\n",queue_arr[front]);
        front++;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("Queue is empty.\n");
    }
    else{
        printf("The queue is : ");
        for(int i = front; i <= rear; i++){
            printf("%d ",queue_arr[i]);
        }
        printf("\n");
    }
}

int main(){

    printf("Queues using array!\n");
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\n");

    int choice;
    do{
        printf("Enter the choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...");
                break;
        }
    }while(choice!=4);

    return 0;
}