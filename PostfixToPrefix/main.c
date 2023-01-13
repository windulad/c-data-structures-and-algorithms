#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"
#include "BinaryTree.h"
#define MAXINPUT 20

void main()
{
    int len;
    char Postfix[MAXINPUT];
    char root;

    printf("Enter the postfix expression: ");
    gets(Postfix);
    len = strlen(Postfix);

    for(int i = 0;i < len;i++){
        createnode(Postfix[i]);
    }

    display();

    printf("Pre-Order Display: ");
    print_prefix(root);
}
