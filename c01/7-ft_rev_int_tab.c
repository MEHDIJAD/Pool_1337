/*• Create a function which reverses a given array of integer (first goes last, etc).
• The arguments are a pointer to int and the number of ints in the array.
• Here’s how it should be prototyped : */
//* void ft_rev_int_tab(int *tab, int size);

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int index;
    int tmp;

    i = 0;
    j = size - 1;
    index = 0;
    while (index < size / 2)
    {
        tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
        i++;
        j--;
        index++;
    }
}

int main(void)
{
    int arr[] = {33,34,35,40,41,42,43,50,51,55};
    int size;
    int i;
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    size = arraySize;
    ft_rev_int_tab(arr, size);
    i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
     
    
}