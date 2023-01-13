#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED
#include "Stack.h"

struct root{
    int data;
    struct root *left, *right;
};

//create a binary tree
struct root *createroot(char data_root, char data_right, char data_left){
    struct root *rootnode;
    rootnode = (struct root *)malloc(sizeof(struct root));
    rootnode -> data = data_root;                        //store value of root
    rootnode -> left = createroot(0, data_left, 0);     //store value of left child
    rootnode -> right = createroot(0, data_right, 0);        //store value of right child
    return rootnode;
};

void print_prefix(struct root *tree)
{
    printf("%d\n",tree -> data);
	print_prefix(tree -> left);
	print_prefix(tree -> right);
}

#endif // BINARYTREE_H_INCLUDED
