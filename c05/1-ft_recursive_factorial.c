//TODO • Create a recursive function that returns the factorial of the number given as a
//TODO/ parameter.
//! •  If the argument is not valid the function should return 0.
//* • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
//* int ft_recursive_factorial(int nb);

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 1){
        return (1);
    }
    else{
        return (nb * ft_recursive_factorial(nb -1));
    }
}

int main(void)
{
    printf("%d", ft_recursive_factorial(5));

    return (0);
}