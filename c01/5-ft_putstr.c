/*• Create a function that displays a string of characters on the standard output.
 • Here’s how it should be prototyped : */
//* void   ft_putstr(char *str)

#include <unistd.h>

void   ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str,1);
        str++;
    }
}

int main(void)
{
    char str[] = "Hello, World!";
    ft_putstr(str);
}