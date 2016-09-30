/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 20:31:05 by vtenigin          #+#    #+#             */
/*   Updated: 2016/09/29 19:41:06 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>

static int	ft_getlen(int n, int base)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

char		ft_getchar(int n)
{
	char	*set = "0123456789ABCDEF";
	return (set[n]);
}

char		*ft_itoa_base(int value, int base)
{
	char	*res;
	int		i;

	if (value == 0)
		return ("0");
	i = ft_getlen(value, base);
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	res[i] = '\0';
	i--;
	if (value < 0)
	{
		res[0] = '-';
		value = -value;
	}
	while (value > 0)
	{
		res[i--] = ft_getchar(value % base);
		value /= base;
	}
	return (res);
}
