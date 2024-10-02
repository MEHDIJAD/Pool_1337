/*• Create a function that displays all different combinations of three different digits in
ascending order, listed by ascending order - yes, repetition is voluntary.
• Here’s the intended output :
$>./a.out | cat -e
// TODO 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
• 987 isn’t there because 789 already is.
• 999 isn’t there because the digit 9 is present more than once. 
• Here’s how it should be prototyped : */
    //* void ft_print_comb(void);

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int i;
    int j;
    int k;
    i = 0;
    while(i <= 9)
    {
        j = 0;
        while(j <= 9)
        {
            k = 0;
            while(k <= 9)
            {
                if(i != j && j != k && i != k && i < j && j < k)
                {
                    ft_putchar(i + '0');
                    ft_putchar(j + '0');
                    ft_putchar(k + '0');
                    if(i < 7)
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }
    ft_putchar('\n');
}

int main(void)
{
    ft_print_comb();
}