// TODO • Create a function that transforms every letter to lowercase.
// • Here’s how it should be prototyped :
//* char *ft_strlowcase(char *str);
//! • It should return str.

#include <stdio.h>

char *ft_strlowcase(char *str)
{
    char *start_str = str;

    while (*str)
    {
        if (*str >= 65 && *str <= 90)
        {
            *str += 32;
        }
        str++;
    }

    return(start_str);
}

int main(void)
{
    char str[] = "ABCDEF";
    printf("%s", ft_strlowcase(str));
}