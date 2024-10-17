//TODO • Create an iterated function that returns a number. This number is the result of a
//TODO/ factorial operation based on the number given as a parameter.
//! • If the argument is not valid the function should return 0.
//* • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
//* int ft_iterative_factorial(int nb);

//TODO /Example: factorial 5 ==> 5! = 5x4x3x2x1 = 120

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int f;

    i = 0;
    f = 1;
    while (i < nb)
    {  
        f = f * (nb - i);
        i++;
    }
    
return (f);
}

int main(void)
{
    printf("%d", ft_iterative_factorial(5));
}