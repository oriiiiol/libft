/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:23:25 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 11:53:35 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	unsigned const char	*a;
	unsigned char		*b;
	size_t				c;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	c = 0;
	if (dst == src || !count)
		return (dst);
	while (count > c)
	{
		b[c] = a[c];
		c++;
	}
	return (dst);
}

// int main()
// {
//     char dest[20] = "olagdghbhsxhsd";
//     const char src[20] = "Hola, adios!";

//     printf("Antes de la copia:\n");
//     printf("%s\n", dest);
//     ft_memcpy(dest, src, 4);
//     printf("\nDespués de la copia:\n");
//     printf("%s\n", dest);
//     return (0);
// }