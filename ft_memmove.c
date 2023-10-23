/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:14:54 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 12:48:49 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t count)
{
	unsigned char		*a;
	const unsigned char	*b = (const unsigned char *)s2;

	a = (unsigned char *)s1;
	if (a < b)
	{
		while (count--)
			*a++ = *b++;
	}
	else if (a > b)
	{
		a += count;
		b += count;
		while (count--)
			*(--a) = *(--b);
	}
	return (s1);
}

// int main()
// {
//     char str[] = "Adios, Vaca!";
//     size_t count = ft_strlen(str);

//     printf("Antes: %s\n", str);
//     ft_memmove(str + 5, str, count - 5);
//     printf("Después: %s\n", str);
//     return (0);
// }
