// • Reproduce the behavior of the function strncmp (man strncmp).
// • Here’s how it should be prototyped :
//* int ft_strncmp(char *s1, char *s2, unsigned int n);

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{

    unsigned int nb;

    if (n == 0){
        return (0);
    }
    nb = 0;
    while (*s1 && *s2 && nb < n)
    {
        if (*s1 != *s2){
            return (*s1 - *s2);
        }
            s1++;
            s2++;
            nb++;
    }
    if (nb < n){
        return (*s1 - *s2);
    }
    return (0);
}

int main(void)
{
    char str1[] = "hello";
    char str2[] = "hello";
    int n;
    
    n = 4;
    printf("%d\n", strncmp(str1, str2, n));
    printf("%d\n", ft_strncmp(str1, str2, n));
    return (0);
}
