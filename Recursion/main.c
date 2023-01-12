#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
    if(n == 0){
        return 1;
    }else{
        return 7 + fun(n - 2);
    }
}

void main()
{
    int n = 4;
    printf("%d", fun(n));
}
