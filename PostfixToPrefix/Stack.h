#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "BinaryTree.h"

//create and initialize a stack
struct node{
    char data;   //element value
    struct node *next;  //pointer value to next element
};

//create top pointer variable
struct node *top = 0;

//push operation
void push(char new_root)
{
    struct node *newnode;   //create a new node
    newnode = (struct node *)malloc(sizeof(*newnode));
    newnode -> data = new_root;    //assign element value to node
    newnode -> next = top;  //assign pointer value to next element to node
    top = newnode;      //update value of top pointer variable
}

//create a node from postfix values
void createnode(char postfix_value)
{
    char operator, operand_1, operand_2;

    struct node *newnode;                               //create a new node
    newnode = (struct node *)malloc(sizeof(*newnode));      //define new node
    newnode -> data = postfix_value;                    //assign element value to new node

    if(postfix_value == '+' || postfix_value == '-' || postfix_value == '*' || postfix_value == '/'){
        operator = newnode -> data;            //assign data of operator node

        //pop operation for operand 1
        struct node *temp_1;              //create a temp pointer variable
        temp_1 = top;                 //assign top node address to temp pointer variable
        operand_1 = top -> data;         //assign data of popping node
        top = top -> next;
        free(temp_1);

        //pop operation for operand 2
        struct node *temp_2;              //create a temp pointer variable
        temp_2 = top;                 //assign top node address to temp pointer variable
        operand_2 = top -> data;         //assign data of popping node
        top = top -> next;
        free(temp_2);

        struct root *newroot;                  //create root node of binary tree
        newroot = createroot(operator, operand_1, operand_2);
        //void push(struct root newroot);
    }else{
        newnode -> next = top;              //assign pointer value to next element to new node
        top = newnode;
    }
}

//Display operation
void display()
{
    struct node *temp;
    temp = top;
    while(temp != 0){
        printf("%c\n",temp -> data);
        temp = temp -> next;
    }
}

#endif // STACK_H_INCLUDED
