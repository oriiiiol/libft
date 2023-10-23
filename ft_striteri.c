/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:21:00 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 11:29:52 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (s == NULL || f == NULL)
	{
		return ;
	}
	index = 0;
	while (*s != '\0')
	{
		f(index, s);
		s++;
		index++;
	}
}
// void increment(unsigned int index, char *caracter)
// {
//     *caracter += index;
// }

// int main()
// {
//     char cadena[] = "autobus";

//     printf("Cadena original: %s\n", cadena);
//     ft_striteri(cadena, increment);
//     printf("Cadena modificada: %s\n", cadena);
//     return (0);
// }