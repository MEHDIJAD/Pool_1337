// • Reproduce the behavior of the function strcmp (man strcmp).
// • Here’s how it should be prototyped :
//* int ft_strcmp(char *s1, char *s2);

#include <string.h> 
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s2)
    {
        if(*s1 != *s2)
        {
            return (*s1 - *s2);
        }
        s1++, s2++;;
        
    }
    return (*s1 - *s2);  
}


int main(void)
{

    char    s1[] = "hallo";
    char    s2[] = "hello";
    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", ft_strcmp(s1, s2));

    return (0);
}
