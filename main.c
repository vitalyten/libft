/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:54:17 by vtenigin          #+#    #+#             */
/*   Updated: 2016/09/29 19:42:32 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_itoa_base(int value, int base);

int	main()
{
	printf("%s\n", ft_itoa_base(-623, 10));
	printf("%s\n", ft_itoa_base(-0, 10));
	printf("%s\n", ft_itoa_base(156, 10));
	printf("%s\n", ft_itoa_base((-2147483647 -1), 10));
	printf("%s\n", itoa((-2147483647 -1)));
	return (0);
}