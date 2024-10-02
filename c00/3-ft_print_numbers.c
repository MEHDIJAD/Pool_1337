#include<unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

int main(void)
{
    int i;
    i = 0;
    //*char c = i + '0';
    while(i <= 9)
    {
        ft_putchar(i + '0');
        //*write(1, &c , 1);
        i++;
        //*c++;
    }
    return (0);
}