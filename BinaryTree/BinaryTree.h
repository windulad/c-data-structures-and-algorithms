#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

//definition of node
typedef char TreeEntry;

typedef struct treenode{
    TreeEntry entry;
    struct treenode *left;
    struct treenode *right;
}TreeNode;

//create a binary tree
void CreateTree(TreeNode **root)
{
    *root = NULL;
}

//tree empty operation
Boolean TreeEmpty(TreeNode *root){
    return(root == NULL);
}

//pre-order traversal
void Preorder(treeNode *root, void(*Visit)(TreeEntry x))
{
    if(root){
        Visit(root -> entry);
        Preorder(root -> left, Visit);          //call itself to traverse the node's left subtree
        Preorder(root -> right, Visit);         //call itself to traverse the node's right subtree
    }
}

//in-order traversal
void Inorder(TreeNode *root, void(*Visit)(TreeEntry x))
{
    if(root){
        Inorder(root -> left, Visit);
        Visit(root -> entry);
        Inorder(root -> right, Visit);
    }
}

//post-order traversal
void Postorder(TreeNode *root, void(*Visit)(TreeEmpty x))
{
    if(root){
        Postorder(root -> left, Visit);
        Postorder(root -> right, Visit);
        Visit(root -> entry);
    }
}

#endif // BINARYTREE_H_INCLUDED
