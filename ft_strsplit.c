/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 19:53:44 by vtenigin          #+#    #+#             */
/*   Updated: 2016/10/01 18:11:48 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skipchar(const char *str, char c)
{
	while (*str && *str == c)
		str++;
	return (*str == '\0' ? NULL : str);
}

static const char	*skipword(const char *str, char c)
{
	while (*str && *str != c)
		str++;
	return (str);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**ret;
	char const	*tmp;
	int			nwords;

	nwords = 0;
	tmp = s;
	while ((tmp = skipchar(tmp, c)))
	{
		nwords++;
		tmp = skipword(tmp, c);
	}
	if (!(ret = (char **)malloc(sizeof(char *) * (nwords + 1))))
		return (NULL);
	ret[nwords] = NULL;
	nwords = 0;
	while ((s = skipchar(s, c)))
	{
		tmp = s;
		s = skipword(s, c);
		ret[nwords++] = ft_strsub(tmp, 0, s - tmp);
	}
	return (ret);
}
