/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:22:13 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 12:45:23 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;
	char	*s1;
	size_t	b;

	s1 = (char *)s;
	b = 0;
	a = (char *)malloc(ft_strlen(s1) + 1);
	if (a == NULL)
		return (NULL);
	while (s1[b] != '\0')
	{
		a[b] = s1[b];
		b++;
	}
	a[b] = '\0';
	return (a);
}

// int main()
// {
// 	const char *original = "Hola, mundo!";
//     char *duplicated = ft_strdup(original);

//     if (duplicated)
//     {
//         printf("Cadena original: %s\n", original);
//         printf("Cadena duplicada: %s\n", duplicated);
//         free(duplicated);
//     }
//     else
//     {
//         printf("Error: No se puede duplicar la cadena.\n");
//     }
//     return (0);
// }
