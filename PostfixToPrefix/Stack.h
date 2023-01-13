#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "BinaryTree.h"
#define N 20

//Define and initialize Stack to store postfix
char Stack[N];
int top = -1;

//Push operation to store postfix chars
void push(char x)
{
    char operator, right, left;          //send operator to binary tree
    if(top == N - 1)
    {
        printf("Overflow\n");
    }else{
        if(x == "+" || x == "-" || x == "*" || x == "/"){
            operator = x;
            right = Stack[top];
            left = Stack[top - 1];
            for(int i = top; i >= top - 1; top--)
                pop();
            }
        }else{
            top++;
            Stack[top] = x;
        }
    }
}

//Pop operation to retrieve and send operands to binary tree
void pop()
{
    char right_child;
    if(top == -1)
        printf("Underflow\n");
    else{
        right_child = Stack[top];
        top--;
    }
    //printf("%d",item);
}

struct node *root;
root = create(operator, right, left);


#endif // STACK_H_INCLUDED
