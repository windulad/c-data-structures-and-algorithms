#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

//define a node
struct node{
    int data;                   //store value of node
    struct node *left, *right;          //store addresses of left child and right child
};

//create a binary tree
struct node *create(int x){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(x == -1){            //no left or right child available
        return 0;
    }else{
        newnode -> data = x;            //store value of node in newnode
        newnode -> left = create();     //store addresses of left child
        newnode -> right = create();        //store addresses of right child
        return newnode;
    }

};

#endif // BINARYTREE_H_INCLUDED
