//TODO • Create an iterated function that returns the value of a power applied to a number.
//! • A power lower than 0 returns 0.
//* • Overflows must not be handled.
//!• We’ve decided that 0 power 0 will returns 1
// • Here’s how it should be prototyped :
//* int ft_iterative_power(int nb, int power);

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;
    

    if (power < 0){
        return (0);
    }
    if (power == 0 && nb == 0){
        return (1);
    }
    
    result = 1;
    while (power > 0)
    {
        result *= nb;
        power--;    
    }
    return (result);
}

int main(void)
{
    printf("%d", ft_iterative_power(2, 8));
    
    return 0;
}
