//* recursion_prob(1): write finction that given an input n sums all nonnegative integers up to n
// sum(0) = 0, sum(1) = 1
// sum(4) = 1+2+3+4 = 10
// sum(n) = 1+2+3+...n

//* 1- base case
//* 2- recursion calls, iteration

#include <stdio.h>

int ft_sum(int nb)
{
    if (nb == 0){
        return (0);
    }
    return (nb + ft_sum(nb - 1));
    

}

int main(void)
{
    printf("%d", ft_sum(5));
}