//TODO • Create a function ft_fibonacci that returns the n-th element of the Fibonacci
//TODO/ sequence, the first element being at the 0 index. We’ll consider that the Fibonacci
//* sequence starts like this: 0, 1, 1, 2.
//* • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
//* int ft_fibonacci(int index);
//! • Obviously, ft_fibonacci has to be recursive.
//! • If the index is less than 0, the function should return -1.

//* 1- base case: fib(0) = 0 and fib(1) = 1 fib(index) = index
//* 2- recursev call: (index - 1) + (index - 2)

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0){
        return (-1);
    }
    if (index < 2) // fibonacc for 0 is / for 1 is 1 
    {
        return (index); 
    }
    return(ft_fibonacci(index -1) + ft_fibonacci(index - 2));

}

int main(void)
{
    printf("%d", ft_fibonacci(2));
}

