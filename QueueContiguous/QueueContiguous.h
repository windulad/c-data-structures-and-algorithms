#ifndef QUEUECONTIGUOUS_H_INCLUDED
#define QUEUECONTIGUOUS_H_INCLUDED
#define MAXQUEUE 20
#define TRUE 1
#define FALSE 0

//definition of queue
typedef int QueueElement;

typedef struct queue{
    QueueElement items[MAXQUEUE];
    int front;
    int rear;
    int count;
}Queue;

//create queue
void CreateQueue(Queue *q)
{
    q -> count = 0;
    q -> front = 0;
    q -> rear = -1;
}

//is query empty ?
int IsQueueEmpty(Queue *q)
{
    if(q -> rear < q -> front)
        return(TRUE);
    else
        return(FALSE);
}

//is query full ?
int IsQueueFull(Queue *q)
{
    if(q -> rear == MAXQUEUE - 1)
        return(TRUE);
    else
        return(FALSE);
}

//append
void Append(Queue *q, QueueElement x)
{
    if(IsQueueFull(q)){
        printf("Queue full\n");
        exit(1);
    }else{
        q -> items[++(q -> rear)] = x;
        q -> count++;
    }
}

//serve
void Serve(Queue *q, QueueElement x)
{
    if(IsQueueEmpty(q)){
        printf("Queue is empty, underflow\n");
        exit(1);
    }else{
        x = q -> items[(q -> front)++];
        q -> count--;
        printf("Serve() = %d\n", x);
    }
}

#endif // QUEUECONTIGUOUS_H_INCLUDED
