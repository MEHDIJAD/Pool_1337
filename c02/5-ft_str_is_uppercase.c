//TODO • Create a function that returns 1 if the string given as a parameter contains only
// uppercase alphabetical characters, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
//* int ft_str_is_uppercase(char *str);
// • It should return 1 if str is empty.

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
     while (*str)
    {
        if (*str >= 65 && *str <= 90)
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
    char str2[] = "HELLO";
    printf("%d", ft_str_is_uppercase(str));
    printf("%d", ft_str_is_uppercase(str1));
    printf("%d", ft_str_is_uppercase(str2));
}
