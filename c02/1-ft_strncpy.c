//* • Reproduce the behavior of the function strncpy (man strncpy).
// • Here’s how it should be prototyped :
//* char *ft_strncpy(char *dest, char *src, unsigned int n);

#include <string.h>
#include <stdio.h>

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
    char dest[100];
    printf("%lld\n", strlen(src));
    printf("%s\n", strncpy(dest,src,8));
    printf("%s\n", ft_strncpy(dest,src,8));

}

