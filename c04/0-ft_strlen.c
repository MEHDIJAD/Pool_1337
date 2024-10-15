// • Create a function that counts and returns the number of characters in a string.
// • Here’s how it should be prototyped :
//* int ft_strlen(char *str);
//! Allowed functions : None

#include <stdio.h>

 int ft_strlen(char *str)
 {
    int len;

    len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);    
 }

 int main(void)
 {
    char    str[] = "Hi, 1337 students!";
    printf("%d", ft_strlen(str));
 }