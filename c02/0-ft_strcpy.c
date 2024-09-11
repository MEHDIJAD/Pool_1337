//*• Reproduce the behavior of the function strcpy (man strcpy).
//• Here’s how it should be prototyped :
//* char *ft_strcpy(char *dest, char *src);

#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    char *dest_start = dest;
    
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; 

    return(dest_start);
}
// OR
char    *ft_strcpy1(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest); 
}

int main(void)
{
    char src[] = "Hello, World!";
    char dest[100];

    printf("%s\n", strcpy(dest, src));
    printf("%s\n", ft_strcpy(dest, src));
    printf("%s\n", ft_strcpy1(dest, src));

    // OR 
    ft_strcpy(dest, src);
    char *tmp = dest;
    while (*tmp)
    {
        putchar(*tmp);
        tmp++;
    }
}
