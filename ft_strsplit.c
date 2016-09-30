/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 19:53:44 by vtenigin          #+#    #+#             */
/*   Updated: 2016/09/29 21:17:17 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*next_word(const char *str, char c)
{
	while (*str && *str == c)
		str++;
	return (*str == '\0' ? NULL : str);
}

static const char	*end_word(const char *str, char c)
{
	while (*str && *str != c)
		str++;
	return (str - 1);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**ret;
	char const	*ptr;
	int			word_count;

	word_count = 0;
	ptr = s;
	while ((ptr = next_word(ptr, c)))
	{
		word_count++;
		ptr = end_word(ptr, c) + 1;
	}
	if (!(ret = (char **)malloc(sizeof(char *) * (word_count + 1))))
		return (NULL);
	ret[word_count] = NULL;
	word_count = 0;
	while ((s = next_word(s, c)) != NULL)
	{
		ptr = s;
		s = end_word(s, c) + 1;
		ret[word_count++] = ft_strsub(ptr, 0, s - ptr);
	}
	return (ret);
}

// static int	word_count(const char *str, char c)
// {
// 	int	i;
// 	int	words;

// 	i = 0;
// 	words = 0;
// 	while (str[i])
// 	{
// 		while (str[i] && str[i] == c)
// 			i++;
// 		while (str[i] && str[i] != c)
// 			i++;
// 		while (str[i] && str[i] == c)
// 			i++;
// 		words++;
// 	}
// 	return (words);
// }

// static int	word_length(const char *str, int i, char c)
// {
// 	int len;

// 	len = 0;
// 	while (str[i + len] && str[i + len] != c)
// 		len++;
// 	return (len);
// }

// char		**ft_strsplit(char const *s, char c)
// {
// 	int		num_words;
// 	int		i;
// 	int		j;
// 	char	**ret;

// 	i = 0;
// 	j = 0;
// 	num_words = word_count(s, c);
// 	ret = (char **)malloc(sizeof(char *) * (num_words + 1));
// 	while (i < num_words)
// 	{
// 		while (s[j] && s[j] == c)
// 			j++;
// 		ret[i++] = ft_strsub(s, j, word_length(s, j, c));
// 		while (s[j] && s[j] != c)
// 			j++;
// 		i++;
// 	}
// 	ret[i] = 0;
// 	return (ret);
// }
