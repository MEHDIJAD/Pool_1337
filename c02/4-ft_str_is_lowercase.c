// • Create a function that returns 1 if the string given as a parameter contains only
// lowercase alphabetical characters, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
//* int ft_str_is_lowercase(char *str);
// • It should return 1 if str is empty.

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
     while (*str)
    {
        if (*str >= 97 && *str <= 122)
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
    char str1[] = "hello";
    char str2[] = "Hello";
    printf("%d", ft_str_is_lowercase(str));
    printf("%d", ft_str_is_lowercase(str1));
    printf("%d", ft_str_is_lowercase(str2));
}
