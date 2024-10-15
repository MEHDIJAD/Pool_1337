// • Reproduce the behavior of the function strstr (man strstr).
// • Here’s how it should be prototyped :
//* char *ft_strstr(char *str, char *to_find);

#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    // if to find string in empty

    if (to_find[i] == '\0')
        return (str);
    
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[i + j] != '\0'){
            j++;
        }
        if (to_find[j] == '\0'){
            return (&str[i]);
        }
        i++;
    }
    return (0);
    
}

int main(void)
{
    char str[] = "Hello, World! Go!!";
    char to_find[] = "World!";

    printf("%s\n", strstr(str, to_find));
    printf("%s", ft_strstr(str, to_find));
}