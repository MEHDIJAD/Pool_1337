//TODO • Create a function that returns 1 if the string given as a parameter contains only alphabetical characters, 
//TODO and 0 if it contains any other character.
// • Here’s how it should be prototyped :
//* int ft_str_is_alpha(char *str);
//! • It should return 1 if str is empty.

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if ((*str >= 65 && *str <= 90)
            || (*str >= 97 && *str <= 122))
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
    char str[] = "";
    char str1[] = "Hello";
    char str2[] = "hello123";
    printf("%d", ft_str_is_alpha(str));
    printf("%d", ft_str_is_alpha(str1));
    printf("%d", ft_str_is_alpha(str2));
}