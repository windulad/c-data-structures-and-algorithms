#include <stdio.h>
#include <stdlib.h>
#include "StackArray.h"

void main()
{
    int ch;
    do{
        printf("Enter choice: 1:Push 2:Pop 3:Display\n");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Incorrect choice\n");
        }
    }while(ch != 0);
}
