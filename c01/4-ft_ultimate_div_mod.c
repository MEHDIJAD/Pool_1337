/* • Create a function ft_ultimate_div_mod with the following prototype :
 //* void   ft_ultimate_div_mod(int *a, int *b);
 • This function divides parameters a by b. The result of this division is stored in the
 int pointed by a. The remainder of the division is stored in the int pointed by b. */

 #include <stdio.h>

void   ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *a / *b;
    *b = tmp % *b;
}

int main(void)
{
    int i;
    int j;

    i = 10;
    j = 5;
    printf("%d div %d = ",i, j);
    ft_ultimate_div_mod(&i, &j);
    printf("%d\n", i);
    i = 10;
    j = 5;
    printf("%d mod %d = ",i, j);
    ft_ultimate_div_mod(&i, &j);
    printf("%d", j);
    //ft_ultimate_div_mod(&i, &j);
    //printf("10 div 5 = %d\n10 mod 5 = %d",i, j);
}