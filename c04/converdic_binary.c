#include <stdio.h>

int count(int nb)
{
    int count = 0;

    while (nb > 0)
    {
        nb /= 2;
        count++;
    }
    return (count);
}

void  decimal_to_binary(int n)
{
    int size = count(n);
   int arr[size];
   int i;

    i = 0;
   while (n > 0)
   {
        arr[i] = n % 2;
        n /= 2;
        i++;
   }
   i = size - 1;
   while (i >= 0)
   {
    write(1, &arr[i], 1);
    i--;
   }
      
}

int main(void)
{
    decimal_to_binary(42);

}