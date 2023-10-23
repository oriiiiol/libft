/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:53:07 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 11:59:09 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t count)
{
	size_t	a;

	a = 0;
	while (a < count)
	{
		((char *)s)[a] = 0;
		a++;
	}
}

// int main()
// {
//     char buffer[10];
//     strncpy(buffer, "Hello, C!", sizeof(buffer));

//     printf("Antes: %s\n", buffer);
//     ft_bzero(buffer, sizeof(buffer));
//     printf("Después: %s\n", buffer);
//     return (0);
// }