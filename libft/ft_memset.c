/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:07:38 by dsedlets          #+#    #+#             */
/*   Updated: 2024/01/30 23:00:58 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *a = b;
	size_t	i;

	i = 0;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return b;
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char b[] = "1234567890";
	int c1 = 7;
	size_t len1 = 7;
	char d[] = "1234567890";
	int c2 = 7;
	size_t len2 = 7;

	printf("%s \n", (char *)ft_memset(b, c1, len1));
	printf("%s \n", (char *)memset(d, c2, len2));
	return (0);
}
*/
