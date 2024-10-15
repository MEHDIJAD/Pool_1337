// • Create a function that displays the number entered as a parameter. The function
// has to be able to display all possible values within an int type variable.
// • Here’s how it should be prototyped :
//* void ft_putnbr(int nb);
// • For example:
// ◦ ft_putnbr(42) displays "42".
//! Allowed functions : write

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648){
        write(1, "-2147483648", 11);
    }
    else if (nb < 0){
        nb = -nb;
        ft_putchar('-');
        ft_putnbr(nb);
    }
    else if(nb > 10){
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else{
        ft_putchar(nb + '0');
    }
}

int main(void)
{
    int nbr = 2147483647;

    ft_putnbr(nbr);

    return 0;
}

