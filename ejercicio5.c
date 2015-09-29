#include <stdlib.h>
#include <stdio.h>

int x;

void fn()
{
    x = 21;
    printf("Variable global %d\n",x);
    int x;
    x = 42;
    printf("Variable local %d\n",x);
}

int main()
{
    fn();
    printf("Variable global %d\n",x);
    
    return 0;
}