#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED
#define N 5

//Define and initialize stack
int Stack[N];
int top = -1;

//Push operation
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

//Pop operation
void pop()
{
    int item;
    if(top == -1)
    {
        printf("Underflow\n");
    }else{
        item = Stack[top];
        top--;
    }
    printf("%d",item);
}

//Display Stack
void display()
{
    int i;
    for(i = top;i >= 0;i--)
    {
        printf("%d\n",Stack[i]);
    }
}

#endif // STACKARRAY_H_INCLUDED
