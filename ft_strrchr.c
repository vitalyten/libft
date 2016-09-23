/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:29:40 by vtenigin          #+#    #+#             */
/*   Updated: 2016/09/23 14:36:32 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str != '\0')
		str++;
	while (*str != (char)c && str >= (char *)s)
		str--;
	return (*str == (char)c ? (char *)str : NULL);
}
