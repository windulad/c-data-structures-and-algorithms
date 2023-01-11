#include <stdio.h>
#include <stdlib.h>
#include "QueueContiguous.h"
#define SIZE 5

void main()
{
    Queue S;
    int numbers[SIZE], i, n;

    CreateQueue(&S);

    for(i = 0; i < SIZE; i++) {
        printf("Enter number: ");
        scanf("%d", &numbers[i]);
    }

    for (i = 0; numbers[i] != '\0'; i++)
        if (!IsQueueFull(&S))
            Append(&S, numbers[i]);

    while(!IsQueueEmpty(&S))
    {
        Serve(&S, &n);
    }
}
