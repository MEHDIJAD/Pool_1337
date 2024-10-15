// • Reproduce the behavior of the function strcat (man strcat).
// • Here’s how it should be prototyped :
//* char *ft_strcat(char *dest, char *src);

//* man strcat : The strcat function in C is used to concatenate two strings.
//It appends the source string (src) to the destination string (dest), overwriting the null byte (\0) at the end of dest, 
//and then adds a new null byte at the end of the concatenated string.

#include <string.h>
#include <stdio.h>


char *ft_strcat(char *dest, char *src)
{
    char    *index_dest = dest;

    // Move dest pointer to the end of the current string

    while (*dest)
    {
        dest++;
    }

    // Copy src to the end of dest

    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }

    // Add null terminator

    *dest = '\0';

    return (index_dest);
}

int main(void)
{
    char    dest[50] = "Hello!";
    char    src[] = " World";
    printf("%s\n", ft_strcat(dest, src));
}