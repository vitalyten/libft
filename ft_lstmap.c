/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 20:31:13 by vtenigin          #+#    #+#             */
/*   Updated: 2016/09/28 21:49:55 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ret;
	t_list *cur;
	t_list *prev;

	ret = NULL;
	if (lst)
	{
		ret = f(lst);
		prev = ret;
		lst = lst->next;
		while (lst)
		{
			cur = f(lst);
			prev->next = cur;
			prev = cur;
			lst = lst->next;
		}
		prev->next = NULL;
	}
	return (ret);
	// t_list *ret;
	// t_list *cur;
	// t_list *prev;

	// ret = NULL;
	// if (lst)
	// {
	// 	ret = f(lst);
	// 	prev = ret;
	// 	lst = lst->next;
	// 	while (lst)
	// 	{
	// 		cur = f(lst);
	// 		prev->next = cur;
	// 		prev = cur;
	// 		lst = lst->next;
	// 	}
	// 	prev->next = NULL;
	// }
	// return (ret);
}
