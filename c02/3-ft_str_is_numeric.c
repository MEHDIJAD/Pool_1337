// • Create a function that returns 1 if the string given as a parameter contains only
// digits, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
//* int ft_str_is_numeric(char *str);
// • It should return 1 if str is empty.

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
     while (*str)
    {
        if (*str >= 48 && *str <= 57)
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
    char str2[] = "123";
    printf("%d", ft_str_is_numeric(str));
    printf("%d", ft_str_is_numeric(str1));
    printf("%d", ft_str_is_numeric(str2));
}