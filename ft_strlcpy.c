/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:31:17 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 12:49:02 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

// int main()
// {
//     char destino[20];
//     const char origen[] = "Hola, mu";

//     size_t longitud_copiada = ft_strlcpy(destino, origen, sizeof(destino));

//     printf("Cadena copiada: %s\n", destino);
//     printf("Longitud copiada: %zu\n", longitud_copiada);

//     return (0);
// }
