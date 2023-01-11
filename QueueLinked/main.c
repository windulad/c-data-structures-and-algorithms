#include <stdio.h>
#include <stdlib.h>
#include "QueueLinked.h"
#define SIZE 5

void main()
{
    //define variables
    Queue S;
    int numbers[SIZE], i, n;

    //create new queue
    CreateQueue(&S);

    //user input enter to local array
    for(i = 0; i < SIZE; i++) {
        printf("Enter number: ");
        scanf("%d", &numbers[i]);
    }

    //pass elements from local array to queue
    for (i = 0; numbers[i] != '\0'; i++)
        if (!IsQueueFull(&S))
            Append(numbers[i], &S);

    //
    while(!IsQueueEmpty(&S))
    {
        Serve(&n, &S);
    }
}
