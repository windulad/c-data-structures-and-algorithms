#include <stdio.h>
#include <stdlib.h>

int fact(int x)
{
    if(x == 1){
        return 1;
    }else{
        return x * fact(x - 1);
    }
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factorial is: %d", fact(n));
}
