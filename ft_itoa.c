/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado < ocollado@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:41:20 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/22 11:46:05 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*change(char *x, unsigned int number, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

static long int	ft_len(int n)
{
	int					len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*x;
	long int			lon;
	unsigned int		num;
	int					sign;

	sign = 1;
	lon = ft_len(n);
	x = (char *)malloc(sizeof(char) * (lon + 1));
	if (!(x))
		return (NULL);
	x[lon--] = '\0';
	if (n == 0)
		x[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		num = n * -1;
		x[0] = '-';
	}
	else
		num = n;
	x = change(x, num, lon);
	return (x);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(123156));
// 	return (0);
// }