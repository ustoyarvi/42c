/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:55:30 by dsedlets          #+#    #+#             */
/*   Updated: 2024/01/29 21:17:53 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a, b, c;

	a = 'q';
	b = '3';
	c = '*';	
	printf("%d \n", ft_isalnum(a));
	printf("%d \n", isalnum(a));
	printf("%d \n", ft_isalnum(b));
	printf("%d \n", isalnum(b));
	printf("%d \n", ft_isalnum(c));
	printf("%d \n", isalnum(c));
	return (0);
}
*/
