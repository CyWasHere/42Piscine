/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:38:53 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/05 12:49:54 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;

	len_d = 0;
	len_s = 0;
	i = 0;
	while (dest[len_d] != '\0')
		len_d++;
	while (src[len_s] != '\0')
		len_s++;
	if (size <= len_d)
		return (size + len_s);
	while (src[i] != '\0' && (len_d + i) < (size - 1))
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
/*
int main(void)
{
	char str1[12] = "Hello";
	char str2[10] = "42";
	char str3[10] = "abcdef";

	printf("%u 'size' --> %s\n", ft_strlcat(str1, " World", 12), str1);
	printf("%u 'size' --> %s\n", ft_strlcat(str2, " Piscine", 10), str2);
	printf("%u 'size' --> %s\n", ft_strlcat(str3, "UVXYZ", 7), str3);
	return (0);
}
*/