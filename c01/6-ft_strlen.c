/* • Create a function that counts and returns the number of characters in a string.
 • Here’s how it should be prototyped : */
//* int    ft_strlen(char *str)

#include <stdio.h>

int    ft_strlen(char *str)
{
    int len;
    len = 0;
    while(*str)
    {
        str++;
        len++;
    }
    return(len);
}

int main(void)
{
    char str[] = "hello";
    printf("%d", ft_strlen(str));

}