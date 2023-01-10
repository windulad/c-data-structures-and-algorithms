#ifndef STACKLINKEDLIST_H_INCLUDED
#define STACKLINKEDLIST_H_INCLUDED

//create and initialize node
struct node{
    int data;   //element value
    struct node *link;  //pointer value to next element
};

//create top pointer variable
struct node *top = 0;

//push operation
void push(int x)
{
    struct node *newnode;   //create a new node
    newnode = (struct node *)malloc(sizeof(*newnode));
    newnode -> data = x;    //assign element value to node
    newnode -> link = top;  //assign pointer value to next element to node
    top = newnode;      //update value of top pointer variable
}

//Pop operation
void pop()
{
    struct node *temp;  //create a temp pointer variable
    temp = top;     //assign top pointer variable value to temp pointer variable
    if(top == 0)
        printf("Underflow");
    else{
        //printf("Pop() = %d\n",top -> data);
        top = top -> link;
        free(temp);
    }
}

//Display operation
void display()
{
    struct node *temp;
    temp = top;
    if(top == 0)
        printf("Empty");
    else{
        while(temp != 0){
            printf("%d\n",temp -> data);
            temp = temp -> link;
        }
    }
}

#endif // STACKLINKEDLIST_H_INCLUDED
