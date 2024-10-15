// • Write a function that converts the initial portion of the string pointed by str to its int representation

//* • The string can start with an arbitray amount of white space (as determined by isspace(3))
//* • The string can be followed by an arbitrary amount of + and - signs, - sign will change
//* the sign of the int returned based on the number of - is odd or even.
//* • Finally the string can be followed by any numbers of the base 10.
//!! • Your function should read the string until the string stop following the rules and return the number found until now.
//! • You should not take care of overflow or underflow. result can be undefined in that case.
// • Here’s an example of a program that prints the atoi return value:
// $>./a.out " ---+--+1234ab567"
// TODO -1234
// • Here’s how it should be prototyped :
//* int ft_atoi(char *str);

#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int signe;
    int number;

    i = 0;
    signe = 1;
    number = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-'){
            signe *= -1;
        }
        i++;  
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        number = (number * 10) + (str[i] - '0');
        i++;
    }

    return (number * signe);    
}

int main(void)
{
    printf("%d\n", ft_atoi(" ---+--+1234ab567"));
    
}