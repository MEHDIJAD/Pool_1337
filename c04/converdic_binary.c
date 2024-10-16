#include <stdio.h>

int count(int nb) // to count the size of array 
{
    int count = 0;

    while (nb > 0)
    {
        nb /= 2; 
        count++;
    }
    //count = 2;
    return (count);
}

void  decimal_to_binary(int n)
{
    int size = count(n);
   int arr[size]; // size = 2
   int i;

    i = 0;
   while (n > 0) // converting end when n (the number we are converting is 0) = 0 
   {
        arr[i] = n % 2; // to get conver
        n /= 2;
        i++; // fill array 
   }
   i = size - 1; // we start from last index (size - 1) because if size = 5, last index is 4
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