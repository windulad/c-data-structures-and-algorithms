#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED
#define N 100

//Define and initialize Stack
char Stack[N];
int top = -1;

//Push operation
void push(char x)
{
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
    char y;
    if(top == -1){
        printf("Underflow\n");
    }else{
        y = Stack[top];
        printf("%c",y);
        top--;
    }
}

#endif // STACKARRAY_H_INCLUDED
