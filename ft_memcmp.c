/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:09:04 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 11:53:14 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*str1;

	dst1 = (unsigned char *)dst;
	str1 = (unsigned char *)str;
	while (n--)
	{
		if (*dst1 != *str1)
		{
			return (*dst1 - *str1);
		}
		dst1++;
		str1++;
	}
	return (0);
}

// int main()
// {
//     const char *str1 = "Hola,!";
//     const char *str2 = "Hola,!";
//     size_t len1 = strlen(str1);
//     size_t len2 = strlen(str2);

//     int result = ft_memcmp(str1, str2, 5);
//     if (result < 0) {
//         printf("Es menor.\n");
//     } else if (result > 0) {
//         printf("Es mayor.\n");
//     } else {
//         printf("Es igual.\n");
//     }
//     return (0);
// }
