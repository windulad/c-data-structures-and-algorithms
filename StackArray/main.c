#include <stdio.h>
#include <stdlib.h>
#include "StackArrayHeader.h"

void main()
{
    int ch;
    do{
        printf("Enter choice: 1:Push 2:Pop\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            default:
                printf("Incorrect choice\n");
        }
    }while(ch != 0);
    //getch();
}
