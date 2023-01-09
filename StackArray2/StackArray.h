#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED

//Define stack
#define MAXSTACK 5

typedef int stackEntry;

typedef struct{
    int top;
    stackEntry entry[MAXSTACK];
}Stack;

//Create stack
void createStack(Stack *s)
{
    s -> top = -1;
}

//IsStackEmpty
typedef enum{FALSE, TRUE}Boolean;

Boolean isStackEmpty(const Stack *s){
    return(s -> top ==  -1);
}

//IsStackFull
Boolean isStackFull(const Stack *s){
    return(s -> top == MAXSTACK - 1);
}

//Push operation
void push(stackEntry item, Stack *s)
{
    if(!isStackFull(s))
        s -> entry[++s -> top] = item;
    else{
        printf("---Stack is Full!!!---");
        exit(1); //program exit with error code
    }
}

void pop(stackEntry *item, Stack *s)
{
    if(!isStackEmpty(s))
        *item = s -> entry[s -> top--];
    else{
        printf("----Stack is Empty!!!---");
        exit(1); //program exit with error code
    }
}

#endif // STACKARRAY_H_INCLUDED
