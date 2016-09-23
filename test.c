/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:02:56 by vtenigin          #+#    #+#             */
/*   Updated: 2016/09/22 17:03:17 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*lta(char *argv, char ret[], int length)
{
	int		index = 0;

	while (index < length + 1)
	{
		ret[index] = argv[index];
		index++;
	}
	return (ret);
}

int		check_memset(char **argv)
{
	int		length = strlen(argv[2]);
	char	ret1[length + 1];
	char	ret2[length + 1];
	char	put = argv[3][0];
	int		n = atoi(argv[4]);

	printf("ft_memset:	%s\n", ft_memset(lta(argv[2], ret1, length), put, n));
	printf("memset:		%s\n", memset(lta(argv[2], ret2, length), put, n));
	return (0);
}

int		check_bzero(char **argv)
{
	int		length = strlen(argv[2]);
	char	ret1[length + 1];
	char	ret2[length + 1];
	int		n = atoi(argv[3]);

	ft_bzero(lta(argv[2], ret1, length), n);
	bzero(lta(argv[2], ret2, length), n);
	printf("ft_bzero:	%s\n", ret1);
	printf("bzero:		%s\n", ret2);
	return (0);
}

int		check_memcpy(char **argv)
{
	int length1 = strlen(argv[2]);
	int length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	int	n = atoi(argv[4]);

	printf("ft_memcpy:	%s\n", ft_memcpy(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2), n));
	printf("memcpy:		%s\n", memcpy(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2), n));
	return (0);
}

int		check_memccpy(char **argv)
{
	int length1 = strlen(argv[2]);
	int length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	char	stop = argv[4][0];
	int	n = atoi(argv[5]);

	printf("ft_memccpy:	%s\n", ft_memccpy(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2), stop, n));
	printf("memccpy:		%s\n", memccpy(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2), stop, n));
	return (0);
}

int		check_memmove(char **argv)
{
	int length1 = strlen(argv[2]);
	int length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	int	n = atoi(argv[4]);

	printf("ft_memmove:	%s\n", ft_memmove(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2), n));
	printf("memmove:	%s\n", memmove(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2), n));
	return (0);
}

int		check_memchr(char **argv)
{
	int length = strlen(argv[2]);
	char	ret1[length + 1];
	char	ret2[length + 1];
	char	find = argv[3][0];
	int	n = atoi(argv[4]);

	printf("ft_memchr:	%s\n", ft_memchr(lta(argv[2], ret1, length), find, n));
	printf("memchr:		%s\n", memchr(lta(argv[2], ret2, length), find, n));
	return (0);
}

int		check_memcmp(char **argv)
{
	int length1 = strlen(argv[2]);
	int	length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	int	n = atoi(argv[4]);

	printf("ft_memcmp:	%d\n", ft_memcmp(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2), n));
	printf("memcmp:		%d\n", memcmp(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2), n));
	return (0);
}

int		check_strlen(char **argv)
{
	printf("ft_strlen:	%zu\n", ft_strlen(argv[2]));
	printf("strlen:		%zu\n", strlen(argv[2]));
	return (0);
}

int		check_strdup(char **argv)
{
	char	*dup1 = ft_strdup(argv[2]);
	char	*dup2 = strdup(argv[2]);

	printf("ft_strdup:	%s\n", dup1);
	printf("strdup:		%s\n", dup2);
	free(dup1);
	free(dup2);
	return (0);
}

int		check_strcpy(char **argv)
{
	int length1 = strlen(argv[2]);
	int	length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];

	printf("ft_strcpy:	%s\n", ft_strcpy(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2)));
	printf("strcpy:		%s\n", strcpy(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2)));
	return (0);
}

int		check_strncpy(char **argv)
{
	int length1 = strlen(argv[2]);
	int	length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	int	n = atoi(argv[4]);

	printf("ft_strncpy:	%s\n", ft_strncpy(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2), n));
	printf("strncpy:	%s\n", strncpy(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2), n));
	return (0);
}

int		check_strcat(char **argv)
{
	int length1 = strlen(argv[2]);
	int	length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	
	printf("ft_strcat:	%s\n", ft_strcat(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2)));
	printf("strcat:		%s\n", strcat(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2)));
	return (0);
}

int		check_strncat(char **argv)
{
	int length1 = strlen(argv[2]);
	int	length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	int	n = atoi(argv[4]);
	
	printf("ft_strncat:	%s\n", ft_strncat(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2), n));
	printf("strncat:	%s\n", strncat(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2), n));
	return (0);
}

int		check_strlcat(char **argv)
{
	int length1 = strlen(argv[2]);
	int	length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	int	n = atoi(argv[4]);
	int num1 = ft_strlcat(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2), n);
	int num2 = strlcat(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2), n);

	printf("ft_strlcat:	%s. Tried to copy %d bytes\n", ret1, num1);
	printf("strlcat:	%s. Tried to copy %d bytes\n", ret3, num2);
	return (0);
}

int		check_strchr(char **argv)
{
	int length = strlen(argv[2]);
	char	ret1[length + 1];
	char	ret2[length + 1];
	char	find = argv[3][0];

	printf("ft_strchr:	%s\n", ft_strchr(lta(argv[2], ret1, length), find));
	printf("strchr:		%s\n", strchr(lta(argv[2], ret2, length), find));
	return (0);
}

int		check_strrchr(char **argv)
{
	int length = strlen(argv[2]);
	char	ret1[length + 1];
	char	ret2[length + 1];
	char	find = argv[3][0];

	printf("ft_strrchr:	%s\n", ft_strrchr(lta(argv[2], ret1, length), find));
	printf("strrchr:	%s\n", strrchr(lta(argv[2], ret2, length), find));
	return (0);
}

int		check_strstr(char **argv)
{
	int length1 = strlen(argv[2]);
	int length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];

	printf("ft_strstr:	%s\n", ft_strstr(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2)));
	printf("strstr:		%s\n", strstr(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2)));
	return (0);
}

int		check_strnstr(char **argv)
{
	int length1 = strlen(argv[2]);
	int length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	int	n = atoi(argv[4]);

	printf("ft_strnstr:	%s\n", ft_strnstr(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2), n));
	printf("strnstr:	%s\n", strnstr(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2), n));
	return (0);
}

int		check_strcmp(char **argv)
{
	int length1 = strlen(argv[2]);
	int	length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];

	printf("ft_strcmp:	%d\n", ft_strcmp(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2)));
	printf("strcmp:		%d\n", strcmp(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2)));
	return (0);
}


int		check_strncmp(char **argv)
{
	int length1 = strlen(argv[2]);
	int	length2 = strlen(argv[3]);
	char	ret1[length1 + 1];
	char	ret2[length2 + 1];
	char	ret3[length1 + 1];
	char	ret4[length2 + 1];
	int	n = atoi(argv[4]);

	printf("ft_strncmp:	%d\n", ft_strncmp(lta(argv[2], ret1, length1), lta(argv[3], ret2, length2), n));
	printf("strncmp:	%d\n", strncmp(lta(argv[2], ret3, length1), lta(argv[3], ret4, length2), n));
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	else if (strcmp(argv[1], "memset") == 0 && argc == 5)
		check_memset(argv);
	else if (strcmp(argv[1], "bzero") == 0 && argc == 4)
		check_bzero(argv);
	else if (strcmp(argv[1], "memcpy") == 0 && argc == 5)
		check_memcpy(argv);
	else if (strcmp(argv[1], "memccpy") == 0 && argc == 6)
		check_memccpy(argv);
	else if (strcmp(argv[1], "memmove") == 0 && argc == 5)
		check_memmove(argv);
	else if (strcmp(argv[1], "memchr") == 0 && argc == 5)
		check_memchr(argv);
	else if (strcmp(argv[1], "memcmp") == 0 && argc == 5)
		check_memcmp(argv);
	else if (strcmp(argv[1], "strlen") == 0 && argc == 3)
		check_strlen(argv);
	else if (strcmp(argv[1], "strdup") == 0 && argc == 3)
		check_strdup(argv);
	else if (strcmp(argv[1], "strcpy") == 0 && argc == 4)
		check_strcpy(argv);
	else if (strcmp(argv[1], "strncpy") == 0 && argc == 5)
		check_strncpy(argv);
	else if (strcmp(argv[1], "strcat") == 0 && argc == 4)
		check_strcat(argv);
	else if (strcmp(argv[1], "strncat") == 0 && argc == 5)
		check_strncat(argv);
	else if (strcmp(argv[1], "strlcat") == 0 && argc == 5)
		check_strlcat(argv);
	else if (strcmp(argv[1], "strchr") == 0 && argc == 4)
		check_strchr(argv);
	else if (strcmp(argv[1], "strrchr") == 0 && argc == 4)
		check_strrchr(argv);
	else if (strcmp(argv[1], "strstr") == 0 && argc == 4)
		check_strstr(argv);
	else if (strcmp(argv[1], "strnstr") == 0 && argc == 5)
		check_strnstr(argv);
	else if (strcmp(argv[1], "strcmp") == 0 && argc == 4)
		check_strcmp(argv);
	else if (strcmp(argv[1], "strncmp") == 0 && argc == 5)
		check_strncmp(argv);
	return (0);
}
