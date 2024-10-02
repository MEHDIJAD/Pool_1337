//• Reproduce the behavior of the function strlcpy (man strlcpy).
//• Here’s how it should be prototyped :
//* unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
//! The return value of strlcpy is the total length of the string it tried to create (the length of src), 
//! not the number of characters copied.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int len;
    unsigned int i;

    len = 0;
    while (src[len])
    {
        len++;
    }
    i = 0;

    if (size > 0)
    {
        while (*src && i < size - 1)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    }
    
    return (len);
}

int main(void)
{
    char src[] = "Hello, World!";
    char dest[100] = {0};
    unsigned int size;
    int i;

    size = 20;
    printf("%d\n", ft_strlcpy(dest, src, size));
    ft_strlcpy(dest, src, size);
    i = 0;
    while (dest[i])
    {
        ft_putchar(dest[i]);
        i++;
    }
    ft_putchar('\n');
    i = 0;
    while (i < strlen(dest) + 1)
    {
        if (dest[i] == '\0')
        {
            printf("\\0"); // to show the null terminater at the end of string 
        }
        else
        {
            printf("%c", dest[i]);
        }
        i++;
    }




}
