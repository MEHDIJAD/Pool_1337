#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *base)
{
    int len = 0;

    while (base[len])
    {
        len++;
    }
    return (len);   
}

int count_arr_size(int nb, char *base)
{
    int count = 0;

    while (nb > 0)
    {
        nb /= ft_strlen(base);
        count++;
    }
    return (count);
}


void ft_putnbr_base(int nbr, char *base)
{
    int basen = ft_strlen(base);
    int size = count_arr_size(nbr, base);
    char arr[size];
    int i;

    i = 0;
    while (nbr > 0)
    {
        arr[i] = base[nbr % basen];
        nbr /= basen;
        i++;
    }
    i = size - 1;
    while (i >= 0)
   {
    write(1, &arr[i], 1);
    i--;
   }    
}

int main(void)
{
    ft_putnbr_base(42, "dgefrf");
}
