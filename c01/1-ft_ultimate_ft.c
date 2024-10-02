/*• Create a function that takes a pointer to pointer to pointer to pointer to pointer
 to pointer to pointer to pointer to pointer to int as a parameter and sets the value
 "42" to that int.
 • Here’s how it should be prototyped :
 void   ft_ultimate_ft(int *********nbr); */

#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
int main(void)
{
    int n;
    int *p1;
    int **p2;
    int ***p3;
    int ****p4;
    int *****p5;
    int ******p6;
    int *******p7;
    int ********p8;
    int *********p9;
    p9 = &p8;
    p8 = &p7;
    p7 = &p6;
    p6 = &p5;
    p5 = &p4;
    p4 = &p3;
    p3 = &p2;
    p2 = &p1;
    p1 = &n;

    n = 1337;
    ft_ultimate_ft(p9);
    printf("%d", n);
}