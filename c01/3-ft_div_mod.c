/*• Create a function ft_div_mod prototyped like this :
 void   ft_div_mod(int a, int b, int *div, int *mod);
 • This function divides parameters a by b and stores the result in the int pointed by
 div. It also stores the remainder of the division of a by b in the int pointed by mod */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int i;
    int j;
    int div; 
    int mod; 

    i = 10;
    j = 5;
    ft_div_mod(i, j, &div, &mod);
    printf("%d div %d = %d\n%d mod %d = %d",i, j, div, i, j, mod);
}
