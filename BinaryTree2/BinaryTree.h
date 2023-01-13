#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

//define a node
struct node{
    int data;
    struct node *left, *right;
};

//create a binary tree
struct node *create(){
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data(-1 for no node): \n");
    scanf("%d", &x);
    if(x == -1){
        return 0;
    }else{
        newnode -> data = x;
        printf("Enter left child of %d: ", x);
        newnode -> left = create();
        printf("Enter right child of %d: ", x);
        newnode -> right = create();
        return newnode;
    }

};

#endif // BINARYTREE_H_INCLUDED
