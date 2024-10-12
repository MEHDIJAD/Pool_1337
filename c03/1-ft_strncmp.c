// • Reproduce the behavior of the function strncmp (man strncmp).
// • Here’s how it should be prototyped :
//* int ft_strncmp(char *s1, char *s2, unsigned int n);

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{

    unsigned int nb;

    if (n == 0)
    {
        return (0);
    }
    
    nb = 0;
    while (*s1 && *s2 && nb < n)
    {
        if (*s1 != *s2){
            return (*s1 - *s2);
        }
        else{
            s1++;
            s2++;
            nb++;
        }
    }
    return (*s1 - *s2);
}

int main(void)
{
    char str1[] = "hallooooo";
    char str2[] = "hello";
    size_t n;

    n = 0;
    while (n < 100)
    {
        printf("%d\n", strncmp(str1, str2, n));
        printf("%d\n\n", ft_strncmp(str1, str2, n));
        n++;
    }

    return (0);
}
