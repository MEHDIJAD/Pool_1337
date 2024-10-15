// • Reproduce the behavior of the function strlcat (man strlcat).
// • Here’s how it should be prototyped :
//* unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int srclen;
    int destlen;
    int i;
    int j;

    destlen = 0;
    srclen = 0;
    j = 0;
    while (dest[destlen] != '\0')
    {
        destlen++;
        j++;
    }
    while (src[srclen] != '\0')
    {
        srclen++;
    }
    i = 0;
    while (srclen <= size - destlen - 1)
    {
        dest[destlen] = src[i];
        destlen++, i++; 
    }
    dest[destlen] = '\0';

    return (j + srclen);   
}

int main(void)
{
    char    dest[50] = "Hello!";
    char    src[] = " World!";

    printf("%d\n", ft_strlcat(dest, src, 50));
    printf("%s", dest);
    
}