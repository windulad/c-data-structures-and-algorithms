#ifndef QUEUECONTIGUOUS_H_INCLUDED
#define QUEUECONTIGUOUS_H_INCLUDED
#define N 5

//create queue
int queue[N];
int front = -1;
int rear = -1;

//enque operation
void enque(int x)
{
    if(rear == N - 1){
        printf("overflow");
    }else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }else{
        rear++;
        queue[rear] = x;
    }
}

//deque operation
void deque()
{
    if(front == -1 && rear == -1){
        printf("underflow");
    }else if(front == rear){
        front = rear = -1;
    }else{
        printf("deque item: %d\n",queue[front]);
        front++;
    }
}

//display operation
void display()
{
    if(front == -1 && rear == -1){
        printf("empty queue");
    }else{
        for(int i = front; i < rear + 1; i++){
            printf("Queue item: %d\n",queue[i]);
        }
    }
}

#endif // QUEUECONTIGUOUS_H_INCLUDED
