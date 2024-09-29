// TODO • Create a function that transforms every letter to uppercase.
// • Here’s how it should be prototyped :
//* char *ft_strupcase(char *str);
//! • It should return str.

#include <stdio.h>

char *ft_strupcase(char *str)
{
    char *index_str = str;

        
    while (*index_str)
    {
        if (*index_str>= 97 && *index_str <= 122)
        {
            *index_str -= 32;
        }
        else{
            index_str++;
        }
    }
    return(str);
}

int main(void)
{
    char str[] = "abcdef";
    printf("%s", ft_strupcase(str));
}