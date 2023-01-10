#ifndef STACKLINKEDLIST_H_INCLUDED
#define STACKLINKEDLIST_H_INCLUDED

//define the node
typedef int StackEntry;

typedef struct node{
    StackEntry entry;
    struct node *next;
}Node;

//defining the stack
typedef struct{
    int no_ele;
    Node *top;
}Stack;

//create and initialize the stack
void CreateStack(Stack *s)
{
    s -> top = NULL;
    s -> no_ele = 0;
}

//push operation
void push(StackEntry item, Stack *s)
{
    Node *np;
    np = (Node *)malloc(sizeof(Node));
    if(np == NULL){
        printf("No enough memory");
        //s -> full = TRUE;
    }else{
        np -> entry = item;
        np -> next = s -> top;
        s -> top = np;
        s -> no_ele++;
    }
}

//pop operation
void pop(StackEntry *item, Stack *s)
{
    Node *np;
    *item = s -> top -> entry;
    np = s -> top;
    s -> top = s -> top -> next;
    s -> no_ele--;
    free(np);
}

#endif // STACKLINKEDLIST_H_INCLUDED
