#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* front;
struct node* rear;

void enqueue(){
    int value;
    printf("Enter the value : ");
    scanf("%d", &value);

    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = value;
    
    if(ptr == NULL){
        printf("Overflow\n");
    }
    else{
        if(front == NULL){
            front = ptr;
            front->next = NULL;
            rear = ptr;
            rear->next = NULL;
        }
        else{
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}

void dequeue(){
    struct node* ptr;

    if(front == NULL){
        printf("Underflow\n");
    }
    else{
        printf("%d has been dequeued\n" , front->data);
        ptr = front;
        front = front->next;
        free(ptr);
    }
}

void display(){
    struct node* ptr;
    ptr = front;

    if(front == NULL){
        printf("Empty Queue\n");
    }
    else{
        printf("The queue is : ");
        while(ptr != NULL){
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main(){

    printf("1.Insert 2.Delete 3.Display 4.Exit\n");
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
    }while(choice != 4);

    return 0;
}