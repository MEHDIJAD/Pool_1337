// • Create a function that returns 1 if the string given as a parameter contains only
// printable characters, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
//* int ft_str_is_printable(char *str);
//! • It should return 1 if str is empty.

// printable characters are from 32(space) to 126(~) in ASCII code 

#include <stdio.h>

int ft_str_is_printable(char *str)
{
     while (*str)
    {
        if (*str >= 32 && *str <= 126)
        {
            str++;
        }
        else
            return (0);
    }
    return (1);
}

int main(void)
{
    printf("%d", ft_str_is_printable("Hello, World!"));
    printf("%d", ft_str_is_printable("Hello\tWorld"));
    printf("%d", ft_str_is_printable("1234!@#$%^&*()_+"));
    printf("%d", ft_str_is_printable("Good\x01Morning"));
}

