#ifndef QUEUELINKED_H_INCLUDED
#define QUEUELINKED_H_INCLUDED

//definition node
typedef int QueueElement;

typedef struct node
{
    QueueElement entry;     //value of the element
    struct node *next;      //pointer to next node
}QueueNode;

//definition of queue
typedef enum{FALSE, TRUE}Boolean;

typedef struct
{
    QueueNode *front;       //pointer to front of queue
    QueueNode *rear;        //pointer to rear of queue
    int count;          //number of nodes in queue
    Boolean full;           //boolean to tell queue full or not
}Queue;

//create a queue
void CreateQueue(Queue *q)
{
    q -> count = 0;
    q -> full = FALSE;
    q -> front = q -> rear = NULL;
}

//Is queue empty ?
Boolean IsQueueEmpty(const Queue *q)
{
    return(q -> front == NULL && q -> rear == NULL);
}

//Is Queue full ?
Boolean IsQueueFull(const Queue *q)
{
    return(q -> full);
}

//append
void Append(QueueElement x, Queue *q)
{
    QueueNode *np;          //create a variable to store node
    np = (QueueNode *)malloc(sizeof(QueueNode));
    if(np == NULL){
        printf("Not enough memory");
        q -> full = TRUE;
    }else{
        np -> entry = x;        //store value of element
        np -> next = NULL;          //store pointer to next element
        if(IsQueueEmpty(q)){
            q -> front = q -> rear = np;        //insert only one node
        }else{
            q -> rear -> next = np;         //append new node
        }
    }
    q -> count++;       //increment number of nodes in queue
}

//serve
void Serve(QueueElement *x, Queue *q)
{
    QueueNode *np;          //create a variable to store node
    if(IsQueueEmpty(q)){
        printf("Queue is empty");
        exit(1);
    }else{
        *x = q -> front -> entry;       //assign value of front node of queue to variable
        np = q -> front;                //assign address of front node of queue to variable
        q -> front = q -> front -> next;        //assign address of second node to front node
        q -> count--;               //decrement number of nodes in queue
        printf("Serve: %d\n", *x);
        if(q -> front == NULL){
            q -> rear = NULL;
        }
        free(np);
    }
}

#endif // QUEUELINKED_H_INCLUDED
