/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:57:34 by vtenigin          #+#    #+#             */
/*   Updated: 2016/09/24 17:23:11 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*src;

	src = (char *)s1;
	i = 0;
	if (!*s2)
		return (src);
	while (src[i])
	{
		j = 0;
		while (src[i + j] == s2[j])
		{
			if (s2[j + 1] == '\0')
				return (src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
