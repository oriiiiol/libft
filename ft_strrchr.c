/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:11:22 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 13:16:22 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
		{
			return (&str[i]);
		}
		i--;
	}
	return (0);
}

// int main()
// {
//     const char str[] = "http://www.vayatiesos.com";
//     const char ch = '.';
//     char *ret;
//     ret = ft_strrchr((char *)str, ch); 
//     if (ret != NULL) 
//     {
//         printf("String after |%c| is - |%s|\n", ch, ret);
//     }
//     else
//     {
//         printf("'%c' not found in the string.\n", ch);
//     }
//     return (0);
// }
