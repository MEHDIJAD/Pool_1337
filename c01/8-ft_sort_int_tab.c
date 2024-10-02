/*• Create a function which sorts an array of integers by ascending order.
• The arguments are a pointer to int and the number of ints in the array.
• Here’s how it should be prototyped :*/
//* void ft_sort_int_tab(int *tab, int size);

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while(j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        j++;
        }
        i++;
    }
    
}

int main(void)
{
    int arr[] = {9,6,3,2,1,4,7,0,8,0,5};
    int size;
    int i;
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    size = arraySize;
    ft_sort_int_tab(arr, size);
    i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    return (0);

}