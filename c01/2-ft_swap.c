/* • Create a function that swaps the value of two integers whose addresses are entered
 as parameters.
 • Here’s how it should be prototyped :
 void   ft_swap(int *a, int *b); */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int i, j;
    i = 1337;
    j = 42;

    printf("i ==>\t%d\tj ==>\t%d\n", i, j);
    ft_swap(&i, &j);
    printf("i ==>\t%d\tj ==>\t%d\n", i, j);
}
 