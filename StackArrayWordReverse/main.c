#include <stdio.h>
#include <stdlib.h>
#include "StackArray.h"

void main()
{
    char Word[99];
    printf("Enter a string: ");
    gets(Word);
    int len = strlen(Word);

    for(int i = 0;i < len;i++){
        push(Word[i]);
    }

    for(int k = 0;k < len;k++){
        pop();
    }
}
