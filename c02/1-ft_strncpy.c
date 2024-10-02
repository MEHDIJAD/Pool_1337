//* • Reproduce the behavior of the function strncpy (man strncpy).
// • Here’s how it should be prototyped :
//* char *ft_strncpy(char *dest, char *src, unsigned int n);

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int  i;
    char *start_dest = dest;

    i = 0;
    while (*src && i < n)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    // Fill the remaining part with null characters if n > length of src
    while (i < n)
    {
        *dest = '\0';
        dest++;
        i++;
    }
    return (start_dest);
}

int main(void)
{
    char src[] = "Hello, World!";
    char dest[100] = {0};
    int n;
    int i;
    n = 5;
    ft_strncpy(dest,src,n);
    i = 0;
    while (dest[i])
    {
        ft_putchar(dest[i]);
        i++;
    }
    ft_putchar('\n');
    i = 0;
    while (i < 100)
    {
        if (dest[i] == '\0')
        {
            printf("\\0");
        }
        else
        {
            printf("%c", dest[i]);
        }
        i++;
    }
    
}

