/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 20:31:05 by vtenigin          #+#    #+#             */
/*   Updated: 2016/09/28 10:43:47 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getlen(int n, int base)
{
	int	len;

	len = 1;
	if (n < 0)
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

char	ft_getchar(int n)
{
	char	*set = "0123456789ABCDEF";
	return (set[n]);
}

char	*ft_itoa_base(int value, int base)
{
	char	*res;
	int		i;

	i = 0;
	if (value == 0)
		return ("0");
	res = (char *)malloc(sizeof(char) * ft_getlen(value, base));
	if (value < 0)
	{
		res[i++] = '-';
		value = -value;
	}
	while (value > 0)
	{
		res[i++] = ft_getchar(value % base);
		value /= base;
	}
	res[i] = '\0';
	return (res);
}
