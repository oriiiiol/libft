/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:21:13 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 11:39:33 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t count)
{
	size_t	a;
	size_t	c;

	a = 0;
	if (*s2 == '\0' || s2 == NULL)
		return ((char *)s1);
	while (s1[a] != '\0' && a < count)
	{
		c = 0;
		while (s2[c] == s1[a + c] && a + c < count)
		{
			if (s2[c + 1] == '\0')
				return ((char *)s1 + a);
			c++;
		}
		a++;
	}
	return (NULL);
}

// int main()
// {
// const char *s1 = "Hola, adios! vaquita gorda";
// const char *s2 = "adios";
// size_t count = 13;

// char *result = ft_strnstr(s1, s2, count);

// if (result != NULL)
//     printf("String Grande: %s, Resultado: %s", s1, result);
// else
//     printf("La subcadena \"%s\" no fue encontrada en \"%s\".\n", s2, s1);

// return (0);
// }