#ifndef STACKARRAYHEADER_H_INCLUDED
#define STACKARRAYHEADER_H_INCLUDED

#define N 5

int Stack[N];
int top = -1;

void push()
{
    int x;
    printf("Enter data\n");
    scanf("%d",&x);
    if(top == N - 1)
    {
        printf("Overflow\n");
    }else{
        top++;
        Stack[top] = x;
    }
}

void pop()
{
    int item;
    if(top == -1)
        printf("Underflow\n");
    else{
        item = Stack[top];
        top--;
    }
    printf("%d",item);
}

#endif // STACKARRAYHEADER_H_INCLUDED
