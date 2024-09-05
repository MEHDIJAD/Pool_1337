/*• Create a function that takes a pointer to int as a parameter, and sets the value "42"
 to that int.
 • Here’s how it should be prototyped :
 void   ft_ft(int *nbr); */

#include <unistd.h>
#include <stdio.h>


void    ft_ft(int *nbr)
{
    *nbr = 42;
} 

int main(void)
{
    int n;
    n = 1337;
    printf("%d\n", n);
    ft_ft(&n);
    printf("%d", n);
}