#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

void foo(void)
{

    int *x = malloc(10*sizeof(int));
    x[10] = 0;
    free(x);
}


int main(void)
{

    foo();
    return 0;
}

