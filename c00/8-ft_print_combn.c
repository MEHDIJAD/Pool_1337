/*• Create a function that displays all different combinations of n numbers by ascending
order.
• //* n will be so that : 0 < n < 10.
• //! If n = 2, here’s the expected output :
$>./a.out | cat -e
// TODO 01, 02, 03, ..., 09, 12, ..., 79, 89$>
//! if n = 3 
//TODO  012, 013, 014, 015, 016, 017,...,689, 789
• Here’s how it should be prototyped :*/
//* void ft_print_combn(int n);

#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    int arr[n];
    int i;
    while (i < n)
    {
        arr[i] = 0;
        i++;
    }
    if(arr[i] < 9 && arr[i + 1 ] < 9)
    {
        ft_print_combn(arr[i + 1]);
    }
}

int main(void)
{
    //ft_print_combn(2);
    printf("%d", 2 == 1);
}