/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 22:27:26 by vtenigin          #+#    #+#             */
/*   Updated: 2016/09/23 14:23:04 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str != (char)c && *str != '\0')
		str++;
	return (*str == (char)c ? (char *)str : NULL);
}
