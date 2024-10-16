//TODO • Create a recursive function that returns the value of a power applied to a number.
//! • A power lower than 0 returns 0.
//* • Overflows must not be handled, the function return will be undefined.
//! • We’ve decided that 0 power 0 will returns 1
// • Here’s how it should be prototyped :
//* int ft_recursive_power(int nb, int power);

#include <stdio.h>

 int ft_recursive_power(int nb, int power)
{
    if (power == 0){
        return(1);
    }
    return (nb * ft_recursive_power(nb, (power - 1)));
    
}

 int main(void)
{
    printf("%d", ft_recursive_power(13, 5));
    
    return 0;
}