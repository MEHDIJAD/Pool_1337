// • Reproduce the behavior of the function strncat (man strncat).
// • Here’s how it should be prototyped :
//* char *ft_strncat(char *dest, char *src, unsigned int nb);

#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int n;
    char     *index_dest = dest;

    while (*dest)
    {
        dest++;
    }
    n = 0;
    while (*src && n < nb)
    {
        *dest = *src;
        dest++, src++;
        n++;
    }
    *dest = '\0';
    
    return (index_dest);
}

int main(void)
{
    char   dest1[50] = "Hello";
    char   dest2[50] = "Hello";
    char    src[] = " World!";
    printf("%s\n", strncat(dest1, src, 5));
    printf("%s\n", ft_strncat(dest2, src, 5));

    return (0);
}