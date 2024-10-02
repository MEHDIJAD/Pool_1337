/*• Create a function that displays all different combination of two two digits numbers
(XX XX) between 00 and 99, listed by ascending order.
• Here’s the expected output :
$>./a.out | cat -e
// TODO 00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
• Here’s how it should be prototyped :*/
//* void ft_print_comb2(void);

#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int i;
    int j;
    i = 0;
    while(i < 99)
    {
        j = i + 1 ;
        while (j < 100)
        {
                ft_putchar((i / 10) + '0');
                ft_putchar((i % 10) + '0');
                ft_putchar(' ');
                ft_putchar((j / 10) + '0');
                ft_putchar((j % 10) + '0');
                ft_putchar(',');
                ft_putchar(' ');

            j++;
        }
        i++;
    }

}

int main(void)
{
    ft_print_comb2();
}