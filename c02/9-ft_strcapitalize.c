//TODO • Create a function that capitalizes the first letter of each word and transforms all
//* other letters to lowercase.
//! • A word is a string of alphanumeric characters.
// • Here’s how it should be prototyped :
//* char *ft_strcapitalize(char *str);
//!• It should return str.
// • For example:
//TODO salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
// • Becomes:
//TODO  Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    char *start_str = str;
    char *turn_lowe = str;

    while (*turn_lowe) // tern all to lowercase
    {
        if ((*turn_lowe >= 65 && *turn_lowe <= 90))
        {
            *turn_lowe += 32;
        }
        turn_lowe++;
    }
    
    //* to handle the first char

    if (*str >= 97 && *str <= 122) // if char is alphanumeric turn uper 
    {
        *str -= 32;
    }
    str++; // move one char

    while (*str)
    {
        if (!(*(str) >= 65 && *(str) <= 90) // if not alphanumeric
        &&!(*(str) >= 97 && *(str) <= 122)
        &&!(*(str) >= 48 && *(str) <= 57))
        {
            if((*(str + 1) >= 65 && *(str + 1) <= 90) // AND if *(str + 1) is alphanumeric
            ||(*(str + 1) >= 97 && *(str + 1) <= 122))
            {
                *(str + 1) -= 32;
            }
        }   
        str++;
    }
    return(start_str);  
} //* 

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str1[] = "ce n'est pas un chat, mais 1chihuahua; cela va? Oui, absolument!";
    printf("%s\n", ft_strcapitalize(str));
    printf("%s", ft_strcapitalize(str1));
}