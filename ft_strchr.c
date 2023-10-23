/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:24:59 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 12:02:43 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != (unsigned char) c)
		str++;
	if ((unsigned char) c == *str)
		return (str);
	return (NULL);
}

// int main() 
// {
//    const char str[] = "unicorniopalid";
//    char *ret;

//    ret = ft_strchr(str, 'r' + 256);
//    printf(" %s, |%c| \n", ret, 'r' + 256);
//    return(0);
// }
