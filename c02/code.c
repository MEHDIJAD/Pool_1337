#include <string.h>
#include <stdio.h>
/*
char *ft_strncpy(char *dest, const char *src, unsigned int n)
{
    unsigned int i;
    char *start_dest = dest;

    i = 0;
    while (*src && i < n)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }

    // Null-terminate if necessary
    while (i < n)
    {
        *dest = '\0';
        dest++;
        i++;
    }

    return start_dest;
}

int main(void)
{
    char src[] = "Hello, World!";
    char dest[100];

    // Print length of src
    printf("Length of src: %zu\n", strlen(src));

    // Use strncpy
    strncpy(dest, src, 8);
    dest[8] = '\0';  // Manually null-terminate to avoid issues
    printf("Result of strncpy: %s\n", dest);

    // Use ft_strncpy
    printf("Result of ft_strncpy: %s\n", ft_strncpy(dest, src, 8));

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:35:32 by eel-garo          #+#    #+#             */
/*   Updated: 2024/07/31 11:01:33 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
    char src[] = "Hello, World!";
    char dest[100];
    printf("%lld\n", strlen(src));
    printf("%s\n", strncpy(dest,src,8));
    printf("%s\n", ft_strncpy(dest,src,8));

}
