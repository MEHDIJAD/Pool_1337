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
        nb /= ft_strlen(base); // nb to convert / base ==> lenght of string 
        count++;
    }
    return (count); // return size of array to creat 
}


void ft_putnbr_base(int nbr, char *base)
{
    int basen = ft_strlen(base); // base (2, 8, 10, 16 ...)
    int size = count_arr_size(nbr, base); // size of array to fill 
    char arr[size]; 
    int i;

    i = 0;
    while (nbr > 0)
    {
        arr[i] = base[nbr % basen]; 
        // exmple ==> arr[0] = base[42 % 16 = 10(index for A)]
        // arr[1] = base[1] = base[2 % 16 = 2(index for 2)] 
        nbr /= basen;
        // 42 / 16 = 2
        // 2 / 16 = 0 (stop loop)
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
    ft_putnbr_base(42, "0123456789ABCDEF");
}
