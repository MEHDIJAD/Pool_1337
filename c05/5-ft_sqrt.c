//TODO • Create a function that returns the square root of a number (if it exists), or 0 if the
//TODO/ square root is an irrational number.
// • Here’s how it should be prototyped :
//* int ft_sqrt(int nb);

#include <stdio.h>

int ft_sqrt(int nb)
{
    int n;

    n = 1;
    while (n < 46340)
    {
        if (n *n == nb)
        {
            return(n);
        }
        n++;
    }
    return (0); 
}

int main(void)
{
    printf("%d", ft_sqrt(100));
    return (0);
}