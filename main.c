#include <stdio.h>
#include <stdlib.h>
int add (int a, int b)
{
    return a+b;
}


int main()
{
    int (*ptr)(int, int) = add;
    int result = ptr(5,4);
    printf("result = %d\n", result);
    printf("result = %d\n", ptr(5,4));
}
