/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:25:05 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/04 22:43:08 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	dst_len = 0;
	while (dest[dst_len] != '\0')
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while (dest[dst_len] != '\0' || dst_len < dstsize - 1 || src[i] != '\0')
	{
		dest[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dest[dst_len] = '\0';
	return (dst_len);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20] = "Hello, ";
	char	dest2[20] = "Hello, ";
	const char	*src = "world!";

//:size_t	len = strlcat(dest, src, 20);
	size_t	len2 = ft_strlcat(dest2, src, 20);
	printf("%s\n", dest);
	printf("%s\n", dest2);
//printf("len %zu\n", len);
	printf("len2 %zu\n", len2);
	return (0);
}
