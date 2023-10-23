/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:32:40 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 12:49:01 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!(s) || !(f))
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!(str))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char my_func(unsigned int i, char str)
// {
//     printf("My inner function: index = %d and %c\n", i, str);
//     return str - 32;
// }

//  int main()
// {
//  	char str[10] = "Hola.";
//  	printf("Resultado %s\n", str);
//  	char *result = ft_strmapi(str, my_func);
//  	printf("Resultado %s\n", result);
// 	return 0;
// }