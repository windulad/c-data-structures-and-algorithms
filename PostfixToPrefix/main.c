#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"
#define MAXINPUT 20

void main()
{
    int len;
    char Postfix[MAXINPUT];

    printf("Enter the postfix expression: ");
    gets(Postfix);
    len = strlen(Postfix);

    for(int i = 0;i < len;i++){
        push(Postfix[i]);
    }
}
