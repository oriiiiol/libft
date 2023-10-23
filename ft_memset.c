/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:39:06 by ocollado          #+#    #+#             */
/*   Updated: 2023/09/19 13:39:06 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t count)
{
	char	*dst_copy;

	dst_copy = (char *)dst;
	while (count > 0)
	{
		*(dst_copy++) = (char)c;
		count--;
	}
	return (dst);
}

// int main()
// {
//     char dst[20] = "Hola, ";
//     int c = '0';

//     ft_memset(dst, c, 6);
//     printf("%s", dst);
// }
