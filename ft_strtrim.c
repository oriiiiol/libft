/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocollado <ocollado@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:24:57 by ocollado          #+#    #+#             */
/*   Updated: 2023/10/23 22:48:00 by ocollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	if (i >= j)
	{
		str = (char *)malloc(1);
		if (str)
			str[0] = '\0';
	}
	else
	{
		str = (char *)malloc(j - i + 1);
		if (str)
			ft_strlcpy(str, s1 + i, j - i + 1);
	}
	return (str);
}

// int main() {
//     char s1[] = "	Hell o, Wo rld!	";
//     char set[] = " \t\n";

//     char *t = ft_strtrim(s1, set);

//     if (t) 
// 	{
//         printf("\"%s\"\n", t);
//         free(t);
//  }
//     return (0);
// }